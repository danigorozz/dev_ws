import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from mobile_manipulator.action import CheckPointReachability

from nav_msgs.msg import OccupancyGrid
from std_msgs.msg import String

global map_msg

class CheckPointReachabilityServer(Node):
	def __init__(self):
		super().__init__("check_reachability_server")
		self._subscription = self.create_subscription(
			OccupancyGrid,
			'/map',
			self.listener_callback,
			10
		)
		self._action_server = ActionServer(
			self,
			CheckPointReachability,
			"check_reachability",
			self.execute_callback
		)

	def listener_callback(self, msg: OccupancyGrid):
		global map_msg
		map_msg = msg
		return
	
	def execute_callback(self, goal_handle):
		feedback_msg = CheckPointReachability.Feedback()
		rate = self.create_rate(1)
		while not map_msg:
			feedback_msg = 'Waiting for map info ...'
			rate.sleep(5)

def main(args=None):
	rclpy.init(args=args)
	action_server = CheckPointReachabilityServer()
	rclpy.spin(action_server)

if __name__ == '__main__':
	main()