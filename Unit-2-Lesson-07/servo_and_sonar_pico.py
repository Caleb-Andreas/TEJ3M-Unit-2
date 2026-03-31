#!/usr/bin/env python3
"""
Created by Caleb Andreas
Created on March 31, 2026
This program measures distance then rotates a servo if the distance is over 50 cm with the pi pico.
"""

import adafruit_hcsr04
import board
import pwmio
import time
from adafruit_motor import servo

# Setup.
sonar = adafruit_hcsr04.HCSR04(trigger_pin=board.GP5, echo_pin=board.GP4)
pwm = pwmio.PWMOut(board.GP2, duty_cycle=2 ** 15, frequency=50) # Set servo output to pin GP2.

# Create a servo object, my_servo.
my_servo = servo.Servo(pwm)
my_servo.angle = 0 # Set the servo to 0° at start.

# Variables.
add = 1
angle = 0

while True:
    try:
        # Find distance.
        distance = sonar.distance
        
        # If distance is greater or equal to 50 cm.
        if distance >= 50:
            if angle == 180:
                # If angle reaches 180° start going other way (subtract).
                add = -1
            elif angle == 0:
                # If angle reaches 0° start going other way (add).
                add = 1
            
        # Change angle to go to.
        angle = angle + add;
        
        # Start moving.
        my_servo.angle = angle

        # Wait.
        time.sleep(0.1)

    except RuntimeError:
        # If the sonar misses an echo.
        time.sleep(0.05)
