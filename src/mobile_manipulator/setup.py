import os
from glob import glob

from setuptools import setup

package_name = 'mobile_manipulator'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),

        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
        (os.path.join('share', package_name, 'rviz'), glob(os.path.join('rviz', '*.rviz'))),
        (os.path.join('share', package_name, 'urdf'), glob(os.path.join('urdf', '*.xacro'))),
        (os.path.join('share', package_name, 'worlds'), glob(os.path.join('worlds', '*.world'))),
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.yaml'))),
        #(os.path.join('share', package_name, 'meshes'), glob(os.path.join('meshes', '*.stl'))),
        
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='daniel',
    maintainer_email='13danielgomez@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'trajectory_points_act_server = mobile_manipulator.joint_points_act_service:main',
            'trajectory_points_from_ik_act_server = mobile_manipulator.joint_points_act_service_from_ik:main',
            'send_goal_pose_action = mobile_manipulator.send_goal_pose_action:main',
            'get_path_action = mobile_manipulator.get_path_action:main',
            'move_both = mobile_manipulator.move_both:main',
            'move_both_2 = mobile_manipulator.move_both_2:main',
            'move_both_parallel = mobile_manipulator.move_both_parallel:main',
            'move_arm = mobile_manipulator.move_arm:main',
            'move_to_saved_config = mobile_manipulator.move_to_saved_config:main',
            'set_gripper_status = mobile_manipulator.set_gripper_status:main',
            'tf_listener = mobile_manipulator.tf_listener_node:main',
        ],
    },
)
