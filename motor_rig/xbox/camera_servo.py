import xbox
import Adafruit_PCA9685
import time

pwm = Adafruit_PCA9685.PCA9685()
joy = xbox.Joystick()
pwm.set_pwm_freq(60)

while True:
	
	leftY_input = int(joy.leftY()*100)
	leftX_input = int(joy.leftX()*100)

	print "LeftY_input: %d" % leftY_input
	print "LeftX_input: %d" % leftX_input

	servo1_input = (367*100+leftY_input*122)//100
	servo2_input = (100*367+leftX_input*122)//100

	pwm.set_pwm(0, 0, servo1_input)
	pwm.set_pwm(1, 0, servo2_input)
