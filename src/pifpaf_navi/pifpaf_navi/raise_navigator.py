import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from rclpy.duration import Duration
import rclpy
from rclpy.node import Node
from robot_navigator import BasicNavigator,NavigationResult

class Raise_Navi(Node):
    def __init__(self):
        super().__init__('Raise_Navi')
        self.navi_sub = self.create_publisher(PoseStamped, 'goal_data',self.data, 10)
        
        navigator = BasicNavigator()
        
        navigator.waitUntilNav2Active()
        
        
        
    def data(self,data):
        self.navi(data)
    def navi(self,data):
        navigator = BasicNavigator()
        
        navigator.waitUntilNav2Active()
        
        navigator.goToPose(data)
        
        while not navigator.isNavComplete():
            
            i = i + 1
        
            feedback = navigator.getFeedback()
        
            if feedback and i % 5 == 0:
                print('Distance remaining: ' + '{:.2f}'.format(feedback.distance_remaining) + ' meters.')
            
                if Duration.from_msg(feedback.navigation_time) > Duration(seconds= 60000.0):
                    self.navigator.cancelNav()
                
                
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
        
def main():
    rclpy.init()
    
    node = Raise_Navi()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()


if __name__ == '__main__':
    main()