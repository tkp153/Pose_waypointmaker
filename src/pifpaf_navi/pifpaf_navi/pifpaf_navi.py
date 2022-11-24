import time
from geometry_msgs.msg import PoseStamped
from rclpy.duration import Duration
import rclpy
from rclpy.node import Node
from robot_navigator import BasicNavigator,NavigationResult
from openpifpaf_ros2_msgs_v2.msg import PoseStamped
from visualization_msgs.msg import Marker
import csv

def main():
    
    rclpy.init()
    
    navigator = BasicNavigator()
    
    navigator.waitUntilNav2Active()
    
    waypoint = []
    goal_poses = []
    num = 0
    
    with open('waypoint_data.csv','r') as file:
        reader = csv.reader(file)
        for raw in reader:
            waypoint.append(raw)
            
    for data in waypoint:
        CheckPoint = PoseStamped()
        CheckPoint.header.frame.id = "map"
        CheckPoint.header.stamp = navigator.get_clock().to_msg
        CheckPoint.pose.position.x = data[0]
        CheckPoint.pose.position.y = data[1]
        CheckPoint.pose.position.z = data[2]
        CheckPoint.pose.orientation.x = data[3]
        CheckPoint.pose.orientation.y = data[4]
        CheckPoint.pose.orientation.z = data[5]
        CheckPoint.pose.orientation.w = data[6]
        goal_poses.append(CheckPoint)
        
    for data in waypoint:
        marker_data = Marker()
        marker_data.header.stamp = navigator.get_clock().to_msg()
        marker_data.header.frame_id = "map"
        marker_data.ns = "basic_shapes"
        marker_data.id = num
        marker_data.action = Marker.ADD
        marker_data.pose.position.x = data[0]
        marker_data.pose.position.y = data[1]
        marker_data.pose.positional.z = data[2]
        marker_data.pose.orientation.x = data[3]
        marker_data.pose.orientation.y = data[4]
        marker_data.pose.orientation.z = data[5]
        marker_data.pose.orientation.w = data[6]
        marker_data.color.r = 1.0
        marker_data.color.g = 0.0
        marker_data.color.b = 0.0
        marker_data.color.a = 1.0
        marker_data.scale.x = 5
        marker_data.scale.y = 1
        marker_data.scale.z = 1
        
        
                
    navigator.goThroughPoses(goal_poses)
    
    while not navigator.isNavComplete():
        
        i = i + 1
        
        feedback = navigator.getFeedback()
        
        if feedback and i % 5 == 0:
            print('Distance remaining: ' + '{:.2f}'.format(feedback.distance_remaining) + ' meters.')
            
            if Duration.from_msg(feedback.navigation_time) > Duration(seconds= 60000.0):
                navigator.cancelNav()
                
                
        result = navigator.getResult()
        if result == NavigationResult.SUCCEEDED:
            print("waypoint pass")
        elif result == NavigationResult.CANCELED:
            print("Goal was cancelNav")
        elif result == NavigationResult.FAILED:
            print("Goal failed")
        else:
            print("Goal has an invalid return state")
        
        
        navigator.lifecycleShutdown()
        
        exit(0)
        
if __name__ == 'main':
    main()    
        
