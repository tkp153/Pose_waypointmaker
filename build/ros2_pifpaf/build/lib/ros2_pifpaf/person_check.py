import rclpy
from rclpy.node import Node
import numpy as np
from openpifpaf_ros2_msgs.msg import Poses,Transforms,Transfrom
import time
'''
<Memo>
このプログラムは、openpifpafの3次元のデータのkeypointsのデータをサブスクライバーし、keypointsの重心を求めそれぞれの人の座標を入手するのを加えて人が挙手したらその情報を記録するプログラムである。
'''


class person_checker(Node):
    def __init__(self):
        super().__init__("person_checker")
        
        #QOSProfile 関連設定
        video_qos = rclpy.qos.QoSProfile(depth = 10)
        video_qos.reliability  = rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT
        
        self.sub = self.create_subscription(Poses,"/human_pose_3d",self.status_checker,qos_profile= video_qos)
        # 人の座標情報
        self.pub_1 = self.create_publisher(Transforms,"/person_check",10)
        #挙手された人の情報
        self.pub_2 =self.create_publisher(Transforms,"/raise_hand_info",10)
        
        self.count_L = 0
        self.count_R = 0
        
    def status_checker(self,data):
        
        #　人の重心座標（すべて）
        Output0 = Transforms()
        #挙手された人の重心座標
        Output2 = Transfrom()
        
        for person in data.poses:
            
            Output1 = Transfrom()
        
            keypoints = np.array(person.keypoints).reshape(-1,4)
            keypoints = keypoints[keypoints[:, 3] != 0]
            num_keypoints = len(keypoints)
            
            #共通部分の変数初期化
            key_num = 0
            
            #重心部分の変数初期化
            x_sum = 0
            y_sum = 0
            z_sum = 0
            count = 0
            
            #挙手部分の変数初期化
            l_num = 0
            r_num = 0
            L_Raise_Hand = False
            R_Raise_Hand = False
            
            #一人の処理↓
            for k in keypoints:
                
                float_value = np.array(k[:3] / 100.0,dtype=float)
                #座標抽出
                x_pos,y_pos,z_pos = float_value
                
                #重心計算エリア
                if (key_num == 5 or key_num == 6 or key_num == 11 or key_num == 12):
                    
                    x_sum += x_pos
                    y_sum += y_pos
                    z_sum += z_pos
                    count += 1
                    
                    if(key_num == 12 and count == 4):
                        Output1.translation.x = x_sum / 4
                        Output1.translation.y = y_sum / 4
                        Output1.translation.z = z_sum / 4
                        Output1.rotation.x = 0.0
                        Output1.rotation.y = 0.0
                        Output1.rotation.z = 0.0
                        Output1.rotation.w = 1.0

                        Output0.append(Output1)
                        OutPut_Cashes = Output1
                        
                #挙手検出エリア
                
                '''
                memo:
                openpifpaf のモデル
                右肘がID8,右肩がID6,右腰がID12である。
                左肘がID7,左肩がID5,左腰がID11である
                '''
                
                #左手の動き処理
                if(key_num == 5 or key_num == 7 or key_num == 11):
                
                    if(key_num == 5):
                        Point_O = np.array([x_pos,y_pos,z_pos])
                        r_num += 1
                    if(key_num == 7):
                        Point_A = np.array([x_pos,y_pos,z_pos])
                        r_num += 1
                    if(key_num == 11):
                        Point_B = Point_O - np.array([0,50,0])
                    if(r_num == 3):
                        L_Raise_theta = self.deg_checker(Point_A, Point_B,Point_O)
                        Hand_Switch = "Left"
                        L_Raise_Hand = self.raise_hand_checker(L_Raise_theta,Point_A,Point_B,Hand_Switch)
                        
                        
                #　右手の動き処理
                if(key_num == 6 or key_num == 8 or key_num == 12):
                    if(key_num == 6):
                        Point_X = np.array([x_pos,y_pos,z_pos])
                        l_num += 1
                    if(key_num == 8):
                        Point_C = np.array([x_pos,y_pos,z_pos])
                        l_num += 1
                    if(key_num == 12):
                        Point_D = Point_X - np.array([0,50,0])
                        l_num += 1
                    if(l_num == 3):
                        R_Raise_theta = self.deg_checker(Point_C,Point_D,Point_X)
                        Hand_Switch ="Right"
                        R_Raise_Hand = self.raise_hand_checker(R_Raise_theta,Point_A,Point_B,Hand_Switch)
                            
                
                #カウント増加
                key_num += 1
                
            #手をあげたのか？
            '''
            メモ；　もし人が手を挙げた場合，その手を挙げた人の重心座標を別でパブリッシュを実施するものをスクリプトで製作する。
            '''
            if(L_Raise_Hand == True and R_Raise_Hand == True):
                self.pub_2.publish(OutPut_Cashes)
            elif(L_Raise_Hand == True):
                print("You are Raise the Hand")
                self.pub_2.publish(OutPut_Cashes)
            elif(R_Raise_Hand == True):
                print("You are Raise the Hand")
                self.pub_2.publish(OutPut_Cashes)
                
        #人の重心座標パブリッシュ
        self.pub_1.publish(Output0)       
                
    '''角度計算メゾット'''
    #TODO: ３次元の場合正しく計算されているか確認する必要がある。
    def deg_checker(self,Point1,Point2,Origin):
        
        # ベクトル生成
        Vector1 = Point1 - Origin
        Vector2 = Point2 - Origin
        
        #ベクトル長さ
        Length1 = np.linalg.norm(Vector1)
        Length2 = np.linalg.norm(Vector2)
        
        #内積の計算
        Dot = np.dot(Vector1,Vector2)
        
        #COSθを計算
        COS_Theta = Dot / (Length1 * Length2)
        Theta = np.arccos(COS_Theta) * 180 / np.pi
        
        return Theta
    
    def raise_hand_checker(self,Theta,Point1,Point2,hand_switch):
        
        #手を挙げた場合０度付近になる。
        #TODO: ３次元での場合でもうまく動作ができるの確認する必要がある。
        
        #左手のチェック実施
        if(hand_switch == "Left"):
            if( Theta < 45 
                and Point1[0] != 0.0 and Point1[1] != 0.0 and Point1[2] != 0.0 
                and Point2[0] != 0.0 and Point2[1] != 0.0 and Point2[2] != 0.0 ):

                self.count_L  += 1
                
                #４フレーム以上カウントされていた場合；Output　-> 挙手（左手）
                #TODO フレーム調整する必要あるかも...
                if(self.count_L > 4):
                    return True
                else:
                    return False
        
        #右手チェック
        elif(hand_switch == "Right"):
            if(Theta < 45
                and Point1[0] != 0.0 and Point1[1] != 0.0 and Point1[2] != 0.0
                and Point2[0] != 0.0 and Point2[1] != 0.0 and Point2[2] != 0.0):
                
                self.count_R += 1
                
                if(self.count_R > 4):
                    return True
                else:
                    return False
        else:
            self.get_logger().error(" out of range !!! 変数の中身確認！！！")
            
def main():
    
    rclpy.init()
    
    node = person_checker()
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    
if __name__ == "__main__":
    main()    