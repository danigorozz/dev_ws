import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
import tf2_ros
import tf2_geometry_msgs
import time

class TFListenerNode(Node):
    def __init__(self, file_path, update_interval=1.0):
        super().__init__('tf_listener_node')
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        self.file_path = file_path
        self.file_handle = open(self.file_path, 'w')
        self.update_interval = update_interval
        self.last_update_time = time.time()

    def get_tf_position(self, target_frame, source_frame):
        try:
            transform_stamped = self.tf_buffer.lookup_transform(target_frame, source_frame, rclpy.time.Time())
            return transform_stamped.transform.translation
        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
            self.get_logger().warn(f"Error looking up transform: {e}")
            return None

    def write_position_to_file(self, position):
        if position:
            self.file_handle.write(f"{position.x};{position.y};{position.z}\n")

    def update(self):
        current_time = time.time()
        if current_time - self.last_update_time >= self.update_interval:
            position = self.get_tf_position('base_link', 'odom')
            if position:
                self.write_position_to_file(position)
                self.get_logger().info(f"Posición en target_frame: {position}")
            self.last_update_time = current_time

def main():
    rclpy.init()

    file_path = 'tf_position.txt'
    update_interval = 0.05  # Intervalo de tiempo en segundos
    node = TFListenerNode(file_path, update_interval)

    try:
        while rclpy.ok():
            node.update()
            rclpy.spin_once(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.file_handle.close()

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
