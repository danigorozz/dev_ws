import rclpy
from rclpy.duration import Duration
from rclpy.action import ActionClient
from rclpy.node import Node

from geometry_msgs.msg import PoseStamped

from nav2_msgs.action import NavigateToPose


class SendGoalPoseActionClient(Node):

	def __init__(self):

		super().__init__('points_publisher_node_action_client')
		self.action_client = ActionClient (self, NavigateToPose, '/navigate_to_pose')

	def send_goal(self):

		goal_msg = NavigateToPose.Goal()

		pose = PoseStamped()
		pose.header.frame_id = 'map'
		pose.header.stamp =  self.get_clock().now().to_msg()
		pose.pose.position.x = 4.6734
		pose.pose.position.y = 0.841827
		pose.pose.position.z = 0.0
		pose.pose.orientation.x = 0.0
		pose.pose.orientation.y = 0.0
		pose.pose.orientation.z = 0.62321
		pose.pose.orientation.w = 0.782054

		goal_msg.pose = pose

		self.action_client.wait_for_server()
		self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
		self.send_goal_future.add_done_callback(self.goal_response_callback)

	
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


def main(args=None):

	rclpy.init()
	
	action_client = SendGoalPoseActionClient()
	future = action_client.send_goal()
	rclpy.spin(action_client)

if __name__ == '__main__':
	main()




