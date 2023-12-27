import rclpy
from rclpy.duration import Duration
from rclpy.action import ActionClient
from rclpy.node import Node

from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint


class SetGripperStatus(Node):

	def __init__(self):
		super().__init__('reach_goal_action')

		self.declare_parameter('action', rclpy.Parameter.Type.STRING)
		self.action = self.get_parameter('action').value

		self.joint_trajectory_action_client = ActionClient (self, FollowJointTrajectory, '/joint_trajectory_controller/follow_joint_trajectory')

		self.close_value = 0.03
		self.open_value = 0.0


	def main(self):

		point = JointTrajectoryPoint()
		if self.action == 'open':
			point.positions = [self.open_value, -self.open_value]
		elif self.action == 'close':
			point.positions = [self.close_value, -self.close_value]
		else:
			raise ValueError("action parameter must be 'close' or 'open'")
		point.time_from_start = Duration(seconds=1.0).to_msg()

		joint_names = ['gripper_joint_left_1', 'gripper_joint_right_1']
		goal_msg = FollowJointTrajectory.Goal()
		goal_msg.goal_time_tolerance = Duration(seconds=1.0).to_msg()
		goal_msg.trajectory.joint_names = joint_names
		goal_msg.trajectory.points = [point]

		send_goal_future = self.joint_trajectory_action_client.send_goal_async(goal_msg)
		rclpy.spin_until_future_complete(self, send_goal_future)
		goal_handle = send_goal_future.result()
		if not goal_handle.accepted:
			self.get_logger().error('Gripper configuration not accepted!')
			rclpy.shutdown()
		self.get_logger().info('Gripper configuration accepted!')
		result_future = goal_handle.get_result_async()
		rclpy.spin_until_future_complete(self, result_future)

		if self.action == 'open':
			self.get_logger().info('Gripper opened!')
		elif self.action == 'close':
			self.get_logger().info('Gripper closed!')

	

def main(args=None):
	rclpy.init()
	node = SetGripperStatus()
	future = node.main()
	rclpy.spin_once(node)

if __name__ == '__main__':
	main()




