import xbox
import Adafruit_PCA9685
import time

pwm = Adafruit_PCA9685.PCA9685()
joy = xbox.Joystick()
pwm.set_pwm_freq(100)

prev_time = time.time()
print_interval = 0.2
while True:
	try:
		leftY_input = int(joy.leftY() * 100)
		leftX_input = int(joy.leftX() * 100)

		if time.time() > (prev_time + print_interval):
			print "LeftY_input: %d" % leftY_input
			print "LeftX_input: %d" % leftX_input
			prev_time = time.time()

		#servo1_input = (367*100+leftY_input*122)//100
		servo1_input = (614*100 + leftY_input*340)//100
		servo2_input = (614*100 + leftX_input*340)//100

		pwm.set_pwm(0, 0, servo1_input)
		pwm.set_pwm(1, 0, servo2_input)

	except (KeyboardInterrupt, SystemExit):
		print "\n\n Program interrupted. Exiting ... \n"
		pwm.set_pwm(0, 0, 0)
		pwm.set_pwm(1, 0, 0)
		pwm.set_pwm_freq(0)
