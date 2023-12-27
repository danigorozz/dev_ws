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
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint

import kinpy as kp
import numpy as np
from kinpy.transform import Transform
import math

# from utils import transform_to_pipi

chain = kp.build_serial_chain_from_urdf(
	open('/home/daniel/dev_ws/src/dsr_description2/urdf/a0912.blue.urdf').read(), 
	"link6", 
	"base_0"
)

class TrajectoryFromIkActionClient(Node):

	def __init__(self):

		super().__init__('points_publisher_node_action_client')
		self.action_client = ActionClient (self, FollowJointTrajectory, '/joint_trajectory_controller/follow_joint_trajectory')

	def send_goal(self):

		points = []
		
		# goal_pose = Transform(rot=np.array([0.0198, 0, 1, 0]), pos=np.array([1, 0.04, 0.07]))
		goal_pose = Transform(rot=np.array([0, 0, -1, 0]), pos=np.array([0.5, 0.0, -0.2]))
	
		goal_point = chain.inverse_kinematics(goal_pose).tolist()
		goal_point = list(map(self.transform_to_pipi, goal_point))
		self.get_logger().info(f'Goal configuration with IK: {goal_point}')

		point1_msg = JointTrajectoryPoint()
		point1_msg.positions = goal_point
		point1_msg.time_from_start = Duration(seconds=4.0).to_msg()

		points.append(point1_msg)

		joint_names = ['joint1','joint2','joint3','joint4','joint5','joint6']
		goal_msg = FollowJointTrajectory.Goal()
		goal_msg.goal_time_tolerance = Duration(seconds=1, nanoseconds=0).to_msg()
		goal_msg.trajectory.joint_names = joint_names
		goal_msg.trajectory.points = points

		self.action_client.wait_for_server()
		self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
		self.send_goal_future.add_done_callback(self.goal_response_callback)

		self.get_logger().info('Hola')

	
	def goal_response_callback(self, future):
		
		goal_handle = future.result()

		if not goal_handle.accepted:
			self.get_logger().info('Goal rejected ')
			return

		self.get_logger().info('Goal accepted')

		self.get_result_future= goal_handle.get_result_async()
		self.get_result_future.add_done_callback(self.get_result_callback)

	def get_result_callback (self, future):
		
		result = future.result().result
		self.get_logger().info('Result: '+str(result))
		rclpy.shutdown()

		
	def feedback_callback(self, feedback_msg):
		feedback = feedback_msg.feedback
	
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
	
	action_client = TrajectoryFromIkActionClient()
	future = action_client.send_goal()
	rclpy.spin(action_client)

if __name__ == '__main__':
	main()




