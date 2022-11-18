from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package = 'ros2_pifpaf',
            namespace='openpifpaf_nodes',
            executable ='openpifpaf_ros2_node',
            output='screen',
            name ='node1'
        ),
        Node(
            package = 'ros2_pifpaf',
            namespace='openpifpaf_nodes',
            executable ='rgbd_openpifpaf_ros2_node',
            output='screen',
            name ='node2'
        )
                              
                              ])