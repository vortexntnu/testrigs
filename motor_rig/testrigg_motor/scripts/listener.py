#!/usr/bin/env python

import rospy
import Adafruit_PCA9685
import time

from std_msgs.msg import String

pwm = Adafruit_PCA9685.PCA9685()
pwm.set_pwm_freq(100)

prev_time = time.time()
print_interval = 0.2

def callback(data):
	strx = ''
	stry = ''
	k = 0
	rospy.loginfo(rospy.get_caller_id() + 'I heard %s', data.data)
	for i in data.data:
		if (i != ',') & (k != 1):
			strx += i
		if k == 1:
			stry += i
		if i == ',':
                        k = 1
	
	leftY_input = int(float(strx) * 100)
        leftX_input = int(float(stry) * 100)

	print leftY_input
	print leftX_input	

	servo1_input = (614*100 + leftY_input*320)//100
        servo2_input = (614*100 + leftX_input*320)//100

	for i in range(0,4):
		pwm.set_pwm(i, 0, servo1_input)
        for i in range(4,8):
		pwm.set_pwm(i, 0, servo2_input)


def listener():

    # In ROS, nodes are uniquely named. If two nodes with the same
    # name are launched, the previous one is kicked off. The
    # anonymous=True flag means that rospy will choose a unique
    # name for our 'listener' node so that multiple listeners can
    # run simultaneously.
    rospy.init_node('listener', anonymous=True)

    rospy.Subscriber('chatter', String, callback)

    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()

if __name__ == '__main__':
    listener()
