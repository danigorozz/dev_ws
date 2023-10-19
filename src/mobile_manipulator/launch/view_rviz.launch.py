import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

import xacro


def generate_launch_description():

    package_name = 'mobile_manipulator'

    rsp = IncludeLaunchDescription(
                PythonLaunchDescriptionSource([os.path.join(
                    get_package_share_directory(package_name),'launch','rsp.launch.py'
                )])
    )

    # Rviz
    rviz_config_file = os.path.join(get_package_share_directory(package_name), 'rviz', 'view_config.rviz')
    rviz_node = Node(
        package = 'rviz2',
        executable= 'rviz2',
        name= 'rviz2',
        arguments=['-d', rviz_config_file]
    )

    # Joint State Publisher Gui
    gui_node = Node(
        package = 'joint_state_publisher_gui',
        executable= 'joint_state_publisher_gui',
        name = 'joint_state_publisher_gui',
        output = 'screen'
    )


    # Launch!
    return LaunchDescription([
        rsp,
        rviz_node,
        gui_node
    ])
