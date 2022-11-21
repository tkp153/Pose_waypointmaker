import rclpy
from rclpy.node import Node
from tf2_ros import StaticTransformBroadcaster,TransformBroadcaster
#from tf_transformations import quaternion_from_quaternion
from geometry_msgs.msg import TransformStamped
from openpifpaf_ros2_msgs_v2.msg import Transforms

class SateliteBroadcaster(Node):
    def __init__(self):
        super().__init__('SateliteBroadcaster')
        
        # 基準点
        Transform_stamped = TransformStamped()
        Transform_stamped.header.stamp = self.get_clock().now().to_msg()
        Transform_stamped.header.frame_id = "camera_link"
        Transform_stamped.child_frame_id = 'camera'
        Transform_stamped.transform.translation.x = 0.0
        Transform_stamped.transform.translation.y = 0.0
        Transform_stamped.transform.translation.z = 1.0
        Transform_stamped.transform.rotation.x = 0.0
        Transform_stamped.transform.rotation.y = 0.0
        Transform_stamped.transform.rotation.z = 0.0
        Transform_stamped.transform.rotation.w = 1.0
        
        broadcaster = StaticTransformBroadcaster(self)
        broadcaster.sendTransform(Transform_stamped)
        
        #人間
        self.sub = self.create_subscription(Transforms,"/person_check",self.human,1)
        
    def human(self,data):
        people =[]
        dsg = []
        id = 0
        id_2 = 0
        broadcast2 = TransformBroadcaster(self)
        
        #print(len(data.transforms))
        
        for n in range(len(data.transforms)):
            text_id = 'human_{}'.format(id)
            people.append(text_id)
            id += 1
        
        for num in range(len(data.transforms)):
            msg = TransformStamped()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = "camera"
            msg.child_frame_id = people[id_2]
            #print(data.transforms[0])
            
            msg.transform.translation.x = data.transforms[id_2].transform.translation.z
            msg.transform.translation.y = data.transforms[id_2].transform.translation.x
            msg.transform.translation.z = data.transforms[id_2].transform.translation.y * -1
            msg.transform.rotation.x = data.transforms[id_2].transform.rotation.x
            msg.transform.rotation.y = data.transforms[id_2].transform.rotation.y
            msg.transform.rotation.z = data.transforms[id_2].transform.rotation.z
            msg.transform.rotation.w = data.transforms[id_2].transform.rotation.w
            broadcast2.sendTransform(msg)
            dsg.append(msg)
            id_2 += 1
            
    def raise_hand_tf(self,data):
        gsg = TransformStamped()
        broadcast3 = TransformBroadcaster(self)
        gsg.header.stamp = self.get_clock().now().to_msg()
        gsg.header.frame_id = "camera"
        gsg.child_frame_id = "RAISE_HAND"
        gsg.transform.translation.x = data.transform.translation.z
        gsg.transform.translation.y = data.transform.translation.x
        gsg.transform.translation.z = data.transform.translation.y * -1
        gsg.transform.rotation.x = data.transform.rotation.x
        gsg.transform.rotation.y = data.transform.rotation.y
        gsg.transform.rotation.z = data.transform.rotation.z
        gsg.transform.rotation.w = data.transform.rotation.w
        
        broadcast3.sendTransform(gsg)                
        
def main():
    rclpy.init()
    
    node = SateliteBroadcaster()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()        