#!/usr/bin/env python3
"""
Created by: Caleb Andreas
Created on: February 2026
This program blinks but every time the light will increase in the amount of time that it is on.
"""

import board
import digitalio
import time

blink_time = 1
led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT

while True:
    led.value = True
    time.sleep(blink_time)
    led.value = False
    time.sleep(1)
    
    blink_time = blink_time + 1
