#!/usr/bin/env python3
"""
Created by Caleb Andreas
Created on March 10, 2026
This program rotates a servo with the Pi Pico.
"""

import time
import board
import pwmio
from adafruit_motor import servo

# Setup.
pwm = pwmio.PWMOut(board.GP2, duty_cycle=2 ** 15, frequency=50) # Set output to pin GP2.
# Create a servo object, my_servo.
my_servo = servo.Servo(pwm)
my_servo.angle = 0 # Set the servo to 0 at start.

while True:
    my_servo.angle = 180    # Goes to 180°.
    time.sleep(1)           # Wait until it reaches 180°.
    my_servo.angle = 0      # Goes back to 0°. 
    time.sleep(1)           # Wait until it reaches 0°
