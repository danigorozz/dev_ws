import rclpy
from rclpy.duration import Duration
from rclpy.action import ActionClient
from rclpy.node import Node

import kinpy as kp
import transformations as tf
from kinpy.transform import Transform
import numpy as np
import quaternion
import math
from kinpy.transform import Transform

from nav2_msgs.action import ComputePathToPose
from nav2_msgs.action import NavigateToPose
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from geometry_msgs.msg import PoseStamped, Point

import json

import tf2_ros
import tf2_geometry_msgs

# chain = kp.build_serial_chain_from_urdf(
# 	open('/home/daniel/dev_ws/src/dsr_description2/urdf/a0912.blue.urdf').read(), 
# 	"gripper_link_ee", 
# 	"base_0"
# )

chain = kp.build_serial_chain_from_urdf(
	open('/home/daniel/dev_ws/src/doosan_description/description/xacro/a0912_with_gripper_for_ik.urdf').read(), 
	"gripper_link_ee", 
	"base_0"
)

DISTANCE_THRESHOLD = 1.0

class ReachGoalAction2(Node):

	def __init__(self):
		super().__init__('reach_goal_action2')

		self.declare_parameter('goal_point', [4.67, 1.0, 1.0])
		self.goal_point = self.get_parameter('goal_point').value

		self.joint_trajectory_action_client = ActionClient (self, FollowJointTrajectory, '/joint_trajectory_controller/follow_joint_trajectory')
		self.compute_path_action_client = ActionClient (self, ComputePathToPose, '/compute_path_to_pose')
		self.navigate_action_client = ActionClient (self, NavigateToPose, '/navigate_to_pose')

		self.tf_buffer = tf2_ros.Buffer()
		self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

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

		#TODO: QUITAR LUEGO
		with open('path.txt', 'w') as f:
			for pose_s in path.poses:
				f.write(str(pose_s.pose.position) + '\n')

		selected_pose, _ = self.select_n_pose(path)
		# rclpy.shutdown()

		######## 2. NAVIGATE TO POSE ########
		goal_msg = NavigateToPose.Goal()
		goal_msg.pose = selected_pose

		self.get_logger().info(f'Selected position: {selected_pose.pose.position}')
		self.get_logger().info(f'Selected orientation: {selected_pose.pose.orientation}')

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
		goal_pose = Transform(rot=goal_orientation, pos=goal_position)

		# tbl = np.quaternion(0, selected_pose.pose.position.x, selected_pose.pose.position.y, selected_pose.pose.position.z)
		# qbl = np.quaternion(selected_pose.pose.orientation.w, selected_pose.pose.orientation.x, selected_pose.pose.orientation.y, selected_pose.pose.orientation.z)
		# pm = np.quaternion(0, goal_position[0], goal_position[1], goal_position[2])
		# tb = np.quaternion(0, 0.197, 0, 0.314)
		# qb = np.quaternion(1, 0, 0, 0)
		
		# pbl = qbl * pm * np.conjugate(qbl) + tbl
		# pb = qb * pbl * np.conjugate(qb) + tb
		# Creamos las matrices para simplificar
		transform_stamped = None
		while not transform_stamped:
			try:
				transform_stamped = self.tf_buffer.lookup_transform('map', 'base_link', rclpy.time.Time())
				print(f'Base position: {transform_stamped.transform.translation}')
				print(f'Base orientation: {transform_stamped.transform.rotation}')
			except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
				self.get_logger().warn(f"Error looking up transform: {e}")

		w_T_bl = self.pose2tranf(Transform(
			pos=[transform_stamped.transform.translation.x, transform_stamped.transform.translation.y, transform_stamped.transform.translation.z],
			rot=[1.0,
				# transform_stamped.transform.rotation.w, 
				0.0,
				# transform_stamped.transform.rotation.x, 
				0.0,
				# transform_stamped.transform.rotation.y, 
				0.0
				# transform_stamped.transform.rotation.z
				]
		))
		bl_T_b = np.array([	[1, 0, 0, 0.197],
							[0, 1, 0, 0],
							[0, 0, 1, 0.314],
							[0, 0, 0, 1]])

		# w_T_p = self.pose2tranf(goal_pose)
		w_p = np.array([goal_position[0], goal_position[1], goal_position[2], 1]).T

		b_T_w = np.linalg.inv(bl_T_b) @ np.linalg.inv(w_T_bl)

		w_p = b_T_w @ w_p

		# self.get_logger().info('Calculos realizados!')

		# q = tf.quaternion_from_matrix(b_T_p)
		# p = b_T_p[:3,3]
		# p = np.array([0.5, 0.5, 0.0])

		# self.get_logger().info(f'Posicion relativa: {w_p.T}')

		p = w_p.T[:3]

		ik = chain.inverse_kinematics(Transform(pos=list(p), rot=goal_orientation)).tolist()

		ik = list(map(self.transform_to_pipi, ik))

		# self.get_logger().info(f'IK calculada! {ik}')

		######## 4. MOVE ARM ########
		# self.get_logger().info('Creando mensaje ...')
		point_msg = JointTrajectoryPoint()
		point_msg.positions = ik[:6]
		point_msg.time_from_start = Duration(seconds=4.0).to_msg()

		joint_names = ['joint1','joint2','joint3','joint4','joint5','joint6']
		goal_msg = FollowJointTrajectory.Goal()
		goal_msg.goal_time_tolerance = Duration(seconds=1, nanoseconds=0).to_msg()
		goal_msg.trajectory.joint_names = joint_names
		goal_msg.trajectory.points = [point_msg]

		# self.get_logger().info('Enviando ...!')

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
		# if verbose:
			# self.get_logger().info(f'Pose seleccionada en el índice {reversed_index} de {len(path.poses) - 1}')
			# self.get_logger().info(f'Posición: {selected_pose.pose.position}')
			# self.get_logger().info(f'Orientación: {selected_pose.pose.orientation}')
		return selected_pose, reversed_index


	def generate_goal(self):
		position = self.goal_point # [x ,y ,z]
		orientation = [0.0198, 0, 1, 0] # Pointing down [w, x, y, z]
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
		qw = Q[0]
		qx = Q[1]
		qy = Q[2]
		qz = Q[3]
		
		# First row of the rotation matrix
		r00 = 1 - 2 * qy*qy + - 2 * qz*qz
		r01 = 2 * (qx * qy - qw * qz)
		r02 = 2 * (qx * qz + qy * qw)
		
		# Second row of the rotation matrix
		r10 = 2 * (qx * qy + qz * qw)
		r11 = 1 - 2 * qx*qx - 2 * qz*qz
		r12 = 2 * (qy * qz - qx * qw)
		
		# Third row of the rotation matrix
		r20 = 2 * (qx * qz - qy * qw)
		r21 = 2 * (qy * qz + qx * qw)
		r22 = 1 - 2 * qx*qx - 2 * qy*qy
		
		# 3x3 rotation matrix
		T = np.array([	[r00, r01, r02, P[0]],
						[r10, r11, r12, P[1]],
						[r20, r21, r22, P[2]],
						[0, 0, 0, 1]
					])
								
		return T
	
	def truncated_remainder(self, dividend, divisor):
		divided_number = dividend / divisor
		divided_number = \
			-int(-divided_number) if divided_number < 0 else int(divided_number)

		remainder = dividend - divisor * divided_number

		return remainder

	def transform_to_pipi(self, input_angle):
		revolutions = int((input_angle + np.sign(input_angle) * np.pi) / (2 * np.pi))

		p1 = self.truncated_remainder(input_angle + np.sign(input_angle) * np.pi, 2 * np.pi)
		p2 = (np.sign(np.sign(input_angle)
					+ 2 * (np.sign(math.fabs((self.truncated_remainder(input_angle + np.pi, 2 * np.pi))
										/ (2 * np.pi))) - 1))) * np.pi

		output_angle = p1 - p2

		return output_angle

def main(args=None):

	rclpy.init()
	
	node = ReachGoalAction2()
	future = node.reach_goal()
	rclpy.spin_once(node)

if __name__ == '__main__':
	main()




