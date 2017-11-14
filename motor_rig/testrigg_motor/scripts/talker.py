#!/usr/bin/env python
# Revision $Id$

## Simple talker demo that published std_msgs/Strings messages
## to the 'chatter' topic

import rospy
import time
import xbox
from std_msgs.msg import String

joy = xbox.Joystick()

def talker():
    pub = rospy.Publisher('chatter', String, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown(): 
        joyLeftX = str(joy.leftX())
	joyLeftY = str(joy.leftY())
	string = joyLeftX + ',' + joyLeftY
	rospy.loginfo(string)
        pub.publish(string)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
