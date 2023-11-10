'''
Author: David Valencia
Date: 26 / 08 /2021

Describer:  An action Client to move the robot joint to a specific position

			This script send the position "angles" of each joint under 
			
			the ACTION - SERVICE /joint_trajectory_controller/joint_trajectory
			
			I need to run first the my_doosan_controller in order to load and start the controllers
			Update: I can also run my environment launch file 

			Executable name in the setup file: trajectory_points_act_server		
'''

import rclpy
from rclpy.duration import Duration
from rclpy.action import ActionClient
from rclpy.node import Node

import kinpy as kp
import transformations as tf
from kinpy.transform import Transform
import numpy as np
import math
from kinpy.transform import Transform

from nav2_msgs.action import ComputePathToPose
from nav2_msgs.action import NavigateToPose
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from geometry_msgs.msg import PoseStamped, Point

chain = kp.build_serial_chain_from_urdf(
	open('/home/daniel/dev_ws/src/dsr_description2/urdf/a0912.blue.urdf').read(), 
	"link6", 
	"base_0"
)

DISTANCE_THRESHOLD = 0.6

class ReachGoalAction(Node):

	def __init__(self):
		super().__init__('reach_goal_action')
		self.joint_trajectory_action_client = ActionClient (self, FollowJointTrajectory, '/joint_trajectory_controller/follow_joint_trajectory')
		self.compute_path_action_client = ActionClient (self, ComputePathToPose, '/compute_path_to_pose')
		self.navigate_action_client = ActionClient (self, NavigateToPose, '/navigate_to_pose')

	def reach_goal(self):

		######## 0. GOAL GENERATION ########
		goal_position, goal_orientation = self.generate_goal()

		######## 1. COMPUTE PATH TO POSE AND SELECT ########
		goal_msg = ComputePathToPose.Goal()
		goal_msg.pose = self.generate_pose_msg_for_path_computing(goal_position)
		goal_msg.planner_id = ''

		send_goal_future = self.compute_path_action_client.send_goal_async(goal_msg)
		rclpy.spin_until_future_complete(self, send_goal_future)
		goal_handle = send_goal_future.result()
		if not goal_handle.accepted:
			self.get_logger().error('Path computing rejected!')
			rclpy.shutdown()
		self.get_logger().info('Path compunting working!')
		result_future = goal_handle.get_result_async()
		rclpy.spin_until_future_complete(self, result_future)
		path = result_future.result().result.path
		selected_pose, _ = self.select_n_pose(path)
		# rclpy.shutdown()

		######## 2. NAVIGATE TO POSE ########
		goal_msg = NavigateToPose.Goal()
		goal_msg.pose = selected_pose

		send_goal_future = self.navigate_action_client.send_goal_async(goal_msg)
		rclpy.spin_until_future_complete(self, send_goal_future)
		goal_handle = send_goal_future.result()
		if not goal_handle.accepted:
			self.get_logger().error('Navigation failed!')
			rclpy.shutdown()
		self.get_logger().info('Navigation pose accepted!')
		result_future = goal_handle.get_result_async()
		rclpy.spin_until_future_complete(self, result_future)
		self.get_logger().info('Navigation completed!')

		######## 3. GET ARM INVERSE KINEMATICS ########
		goal_pose = Transform(rot=goal_orientation, pos=goal_orientation)
		# Creamos las matrices para simplificar
		w_T_bl = self.pose2tranf(Transform(
			pos=[selected_pose.pose.position.x, selected_pose.pose.position.y, selected_pose.pose.position.z],
			rot=[selected_pose.pose.orientation.w, 
				selected_pose.pose.orientation.x, 
				selected_pose.pose.orientation.y, 
				selected_pose.pose.orientation.z]
		))
		bl_T_b = np.array([	[1, 0, 0, 0.197],
							[0, 1, 0, 0],
							[0, 0, 1, 0.314],
							[0, 0, 0, 1]])

		w_T_p = self.pose2tranf(goal_pose)

		b_T_p = np.linalg.inv(bl_T_b) @ np.linalg.inv(w_T_bl) @ w_T_p

		self.get_logger().info('Calculos realizados!')

		q = tf.quaternion_from_matrix(b_T_p)
		# p = b_T_p[:3,3]
		p = np.array([0.5, 0.5, 0.0])

		self.get_logger().info(f'Posicion: {p}')

		ik = chain.inverse_kinematics(Transform(pos=p, rot=q))

		self.get_logger().info(f'IK calculada! {ik}')

		######## 4. MOVE ARM ########
		self.get_logger().info('Creando mensaje ...')
		point_msg = JointTrajectoryPoint()
		point_msg.positions = ik.tolist()
		point_msg.time_from_start = Duration(seconds=4.0).to_msg()

		joint_names = ['joint1','joint2','joint3','joint4','joint5','joint6']
		goal_msg = FollowJointTrajectory.Goal()
		goal_msg.goal_time_tolerance = Duration(seconds=1, nanoseconds=0).to_msg()
		goal_msg.trajectory.joint_names = joint_names
		goal_msg.trajectory.points = [point_msg]

		self.get_logger().info('Enviando ...!')

		send_goal_future = self.joint_trajectory_action_client.send_goal_async(goal_msg)
		rclpy.spin_until_future_complete(self, send_goal_future)
		goal_handle = send_goal_future.result()
		if not goal_handle.accepted:
			self.get_logger().error('Joint configuration not accepted!')
			rclpy.shutdown()
		self.get_logger().info('Joint configuration accepted!')
		result_future = goal_handle.get_result_async()
		rclpy.spin_until_future_complete(self, result_future)
		self.get_logger().info('Goal reached!')

	
	def select_n_pose(self, path, verbose=True):
		reversed_index = len(path.poses) - 1
		goal_pose = path.poses[-1]
		for pose_s in reversed(path.poses):
			distance = self.compute_distance(pose_s.pose.position, goal_pose.pose.position)
			if distance > DISTANCE_THRESHOLD:
				break
			selected_pose = pose_s
			reversed_index -= 1
		if verbose:
			self.get_logger().info(f'Pose seleccionada en el índice {reversed_index} de {len(path.poses) - 1}')
			self.get_logger().info(f'Posición: {selected_pose.pose.position}')
			self.get_logger().info(f'Orientación: {selected_pose.pose.orientation}')
		return selected_pose, reversed_index


	def generate_goal(self):
		position = [4.67, 1.0, 1.0] # [x ,y ,z]
		orientation = [0.0, 0.0, -1.0, 0.0] # Pointing down [w, x, y, z]
		return position, orientation

	def generate_pose_msg_for_path_computing(self, position):
		pose = PoseStamped()
		pose.header.frame_id = 'map'
		pose.header.stamp =  self.get_clock().now().to_msg()
		pose.pose.position.x = position[0]
		pose.pose.position.y = position[1]
		pose.pose.position.z = 0.0
		pose.pose.orientation.x = 0.0
		pose.pose.orientation.y = 0.0
		pose.pose.orientation.z = 0.0
		pose.pose.orientation.w = 1.0
		return pose
	
	def compute_distance(self, pos1: Point, pos2: Point):
		return math.sqrt(math.pow(pos2.x - pos1.x, 2) + math.pow(pos2.y - pos1.y, 2))

	def pose2tranf(self, pose: Transform):
		Q = pose.rot
		P = pose.pos
		# Extract the values from Q
		q0 = Q[0]
		q1 = Q[1]
		q2 = Q[2]
		q3 = Q[3]
		
		# First row of the rotation matrix
		r00 = 2 * (q0 * q0 + q1 * q1) - 1
		r01 = 2 * (q1 * q2 - q0 * q3)
		r02 = 2 * (q1 * q3 + q0 * q2)
		
		# Second row of the rotation matrix
		r10 = 2 * (q1 * q2 + q0 * q3)
		r11 = 2 * (q0 * q0 + q2 * q2) - 1
		r12 = 2 * (q2 * q3 - q0 * q1)
		
		# Third row of the rotation matrix
		r20 = 2 * (q1 * q3 - q0 * q2)
		r21 = 2 * (q2 * q3 + q0 * q1)
		r22 = 2 * (q0 * q0 + q3 * q3) - 1
		
		# 3x3 rotation matrix
		T = np.array([	[r00, r01, r02, P[0]],
						[r10, r11, r12, P[1]],
						[r20, r21, r22, P[2]],
						[0, 0, 0, 1]
					])
								
		return T

def main(args=None):

	rclpy.init()
	
	node = ReachGoalAction()
	future = node.reach_goal()
	rclpy.spin_once(node)

if __name__ == '__main__':
	main()




