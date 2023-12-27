import rclpy
from rclpy.duration import Duration
from rclpy.action import ActionClient
from rclpy.node import Node

from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint

SAVED_CONFIGS = {
	"home": [0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
	"carry": [0.0, 0.0, -2.4, 0.0, -0.71, 0.0],
	"evade": [0.0, 0.17, 2.4, 0.0, 0.58, 0.0]
}

class MoveToSavedConfig(Node):

	def __init__(self):
		super().__init__('move_to_saved_config')

		self.declare_parameter('goal', rclpy.Parameter.Type.STRING)
		self.goal = self.get_parameter('goal').value

		if self.goal not in list(SAVED_CONFIGS.keys()):
			raise Exception('Goal not listed!')

		self.joint_trajectory_action_client = ActionClient (self, FollowJointTrajectory, '/joint_trajectory_controller/follow_joint_trajectory')

	def move(self):
		point = JointTrajectoryPoint()
		point.positions = SAVED_CONFIGS[self.goal]
		point.time_from_start = Duration(seconds=4.0).to_msg()

		joint_names = ['joint1','joint2','joint3','joint4','joint5','joint6']
		goal_msg = FollowJointTrajectory.Goal()
		goal_msg.goal_time_tolerance = Duration(seconds=1, nanoseconds=0).to_msg()
		goal_msg.trajectory.joint_names = joint_names
		goal_msg.trajectory.points = [point]

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


def main(args=None):

	rclpy.init()
	
	node = MoveToSavedConfig()
	future = node.move()
	rclpy.spin_once(node)

if __name__ == '__main__':
	main()




