import rclpy
from rclpy.duration import Duration
from rclpy.action import ActionClient
from rclpy.node import Node

from geometry_msgs.msg import PoseStamped, Point

from nav2_msgs.action import ComputePathToPose

import math

DISTANCE_THRESHOLD = 1


class GetPathActionClient(Node):

	def __init__(self):

		super().__init__('path_publisher')
		self.action_client = ActionClient (self, ComputePathToPose, '/compute_path_to_pose')

	def send_goal(self):

		goal_msg = ComputePathToPose.Goal()

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
		goal_msg.planner_id = ''

		self.action_client.wait_for_server()
		self.send_goal_future = self.action_client.send_goal_async(goal_msg)
		self.send_goal_future.add_done_callback(self.goal_response_callback)

	
	def goal_response_callback(self, future):
		
		goal_handle = future.result()

		if not goal_handle.accepted:
			self.get_logger().info('Goal rejected ')
			return

		self.get_logger().info('Goal accepted')

		self.get_result_future = goal_handle.get_result_async()
		self.get_result_future.add_done_callback(self.get_result_callback)

	def get_result_callback (self, future):
		result = future.result().result
		poses_list: list = result.path.poses
		# planning_time = result.planning_time

		reversed_index = len(poses_list) - 1
		goal_pose = poses_list[-1]
		for pose_s in reversed(poses_list):
			distance = self.compute_distance(pose_s.pose.position, goal_pose.pose.position)
			if distance > DISTANCE_THRESHOLD:
				break
			selected_pose = pose_s
			reversed_index -= 1

		self.get_logger().info(f'''
			Pose seleccionada en el índice {reversed_index} de {len(poses_list) - 1} \n
			Posición: {selected_pose.pose.position} \n
			Orientación: {selected_pose.pose.orientation}
		''')
		rclpy.shutdown()

	def compute_distance(self, pos1: Point, pos2: Point):
		return math.sqrt(math.pow(pos2.x - pos1.x, 2) + math.pow(pos2.y - pos1.y, 2))
	


def main(args=None):

	rclpy.init()
	
	action_client = GetPathActionClient()
	future = action_client.send_goal()
	rclpy.spin(action_client)

if __name__ == '__main__':
	main()




