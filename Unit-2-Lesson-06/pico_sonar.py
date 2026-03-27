#!/usr/bin/env python3
"""
Created by Caleb Andreas
Created on March 27, 2026
This program checks distance using the sonar with the Pi Pico.
"""

import time
import board
import adafruit_hcsr04

# Setup.
sonar = adafruit_hcsr04.HCSR04(trigger_pin=board.GP5, echo_pin=board.GP4)

while True:
    try:
        print((sonar.distance,))
    except RuntimeError:
        print("Retrying!")
    time.sleep(0.1)
