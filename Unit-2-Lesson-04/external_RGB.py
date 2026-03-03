#!/usr/bin/env python3
"""
Created by: Caleb Andreas
Created on: February 24, 2026
This program is a program for the pi pico that goes through the colours of an external RGB LED.
"""

import board
import digitalio
import time

# Setup.
pin5 = digitalio.DigitalInOut(board.GP5) # Set red output to pin5.
pin6 = digitalio.DigitalInOut(board.GP6) # Set green output to pin6.
pin7 = digitalio.DigitalInOut(board.GP7) # Set blue output to pin7.
pin5.direction = digitalio.Direction.OUTPUT
pin6.direction = digitalio.Direction.OUTPUT
pin7.direction = digitalio.Direction.OUTPUT


while True:
    pin5.value = True   # Turn red on.
    pin6.value = False  # Turn green off.
    pin7.value = False  # Turn blue off.
    time.sleep(1)       # Wait for a second.

    pin5.value = False  # Turn red off.
    pin6.value = True   # Turn green on.
    pin7.value = False  # Turn blue off.
    time.sleep(1)       # Wait for a second.

    pin5.value = False  # Turn red off.
    pin6.value = False  # Turn green off.
    pin7.value = True   # Turn blue on.
    time.sleep(1)       # Wait for a second.

    pin5.value = True   # Turn red on.
    pin6.value = True   # Turn green on.
    pin7.value = False  # Turn blue off.
    time.sleep(1)       # Wait for a second.

    pin5.value = False  # Turn red off.
    pin6.value = True   # Turn green on.
    pin7.value = True   # Turn blue on.
    time.sleep(1)       # Wait for a second.

    pin5.value = True   # Turn red on.
    pin6.value = False  # Turn green off.
    pin7.value = True   # Turn blue on.
    time.sleep(1)       # Wait for a second.

    pin5.value = True   # Turn red on.
    pin6.value = True   # Turn green on.
    pin7.value = True   # Turn blue on.
    time.sleep(1)       # Wait for a second.
