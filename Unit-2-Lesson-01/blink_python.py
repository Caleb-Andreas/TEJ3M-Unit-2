#!/usr/bin/env python3
"""
Created by: Caleb Andreas
Created on: February 18, 2026
This program is the blink program for the pi pico.
"""

import board
import digitalio
import time

# Setup.
led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT

while True:
    led.value = True
    time.sleep(1)
    led.value = False
    time.sleep(1)
