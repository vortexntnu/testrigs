import serial
from time import sleep
port = serial.Serial("/dev/serial0", baudrate=9600, timeout=None)

while True:
	i = raw_input("Send >")
	port.write("1")
	sleep(0.1)
