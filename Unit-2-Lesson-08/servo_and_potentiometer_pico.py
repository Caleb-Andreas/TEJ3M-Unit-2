#!/usr/bin/env python3
"""
Created by Caleb Andreas
Created on April 15, 2026
This program rotates a servo with the Pi Pico using the potentiometer.
"""

import board
import digitalio
import time
import pwmio
from adafruit_motor import servo
from analogio import AnalogIn

# Constants.
ANGLE_POTENTIOMETER_RATIO = 180 / 65535 # Maximum angle of rotation / maximum 16-bit number.

# Servo setup.
pot_wire = pwmio.PWMOut(board.GP2, duty_cycle=2 ** 15, frequency=50) # Set output to pin GP2.
# Create a servo object, my_servo.
my_servo = servo.Servo(pot_wire)
my_servo.angle = 0 # Set the servo to 0° at start.

# Potentiometer setup.
potentiometer_value = AnalogIn(board.A0)

while True:
    # Get value of potentiometer.
    angle = potentiometer_value.value * ANGLE_POTENTIOMETER_RATIO
    # Go to angle.
    my_servo.angle = angle
    # Wait.
    time.sleep(0.05)
