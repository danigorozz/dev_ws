import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

from launch_ros.actions import Node


def generate_launch_description():

    # Include the robot_state_publisher launch file, provided by our own package. Force sim time to be enabled

    package_name='mobile_manipulator'

    world_file = os.path.join(get_package_share_directory(package_name), 'worlds', 'warehouse2.world')
    gazebo_sim = IncludeLaunchDescription(
                PythonLaunchDescriptionSource([os.path.join(
                    get_package_share_directory(package_name),'launch','gazebo_sim.launch.py'
                )]), launch_arguments={'world': world_file}.items()
    )

    # Launch rviz2 with config file
    rviz_config = os.path.join(get_package_share_directory(package_name), 'rviz', 'nav2_config.rviz')
    rviz2 = Node(
        executable='rviz2',
        package='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config]
    )

    # Launch slam_tootlbox for localization
    params_file = os.path.join(get_package_share_directory(package_name), 'config', 'mapper_params_online_async.yaml')
    slam_toolbox = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('slam_toolbox'),'launch','online_async_launch.py'
        )]), launch_arguments={'params_file': params_file, 'use_sim_time': 'true'}.items()
    )

    # Launch nav2
    # nav2 = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource([os.path.join(
    #         get_package_share_directory('nav2_bringup'),'launch','navigation_launch.py'
    #     )]), launch_arguments={'use_sim_time': 'true'}.items()
    # )

    # load and START the controllers in launch file
    load_joint_state_broadcaster = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'start','joint_state_broadcaster'],
        output='screen'
    )

    load_joint_trajectory_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'start','joint_trajectory_controller'],
        output='screen'
    )


    # Launch them all!
    return LaunchDescription([
        gazebo_sim,
        rviz2,
        slam_toolbox,
        ExecuteProcess(cmd=['ros2', 'launch', 'nav2_bringup', 'navigation_launch.py', 'use_sim_time:=true'], output='screen'),
        load_joint_state_broadcaster,
        load_joint_trajectory_controller
        # nav2
    ])
