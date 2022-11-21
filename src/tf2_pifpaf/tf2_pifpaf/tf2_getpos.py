import rclpy
from rclpy.node import Node
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from geometry_msgs.msg import PoseStamped

class Listener(Node):
    def __init__(self):
        super().__init__('Listener')
        
        self.target_frame = 'camera_link'
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer,self)
        
        self.pub = self.create_publisher(PoseStamped,'Waypoints',10)
        
        timer_period = 0.1
        
        self.timer = self.create_timer(timer_period,self.timer_callback)
        
    def timer_callback(self):
        source_frame = 'RAISE_HAND'
        try:
            when = rclpy.time.Time()
            trans = self.tf_buffer.lookup_transform(self.target_frame,source_frame,when)
        except TransformException as ex:
            #self.get_logger().info(str(ex))
            return
        msg = PoseStamped()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.target_frame
        msg.pose.position.x = trans.transform.translation.x
        msg.pose.position.y = trans.transform.translation.y
        msg.pose.position.z = trans.transform.translation.z
        msg.pose.orientation.x = trans.transform.rotation.x
        msg.pose.orientation.y = trans.transform.rotation.y
        msg.pose.orientation.z = trans.transform.rotation.z
        msg.pose.orientation.w = trans.transform.rotation.w
        self.pub.publish(msg)

def main():
            rclpy.init()
            
            node = Listener()
            try:
                rclpy.spin(node)
            except KeyboardInterrupt:
                pass
            rclpy.shutdown()
            
if __name__ == "__main__":
    main()
