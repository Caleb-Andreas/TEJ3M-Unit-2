// Created by Caleb Andreas
// Created on April 14, 2026
// This program rotates a servo with the Arduino using the potentiometer.

#include <Servo.h>

// Create servo.
Servo servoNumber1;

// Variables.
const int ANGLE_POTENTIOMETER_RATIO = 1023 /180;
const int PIN_9 = 9;
const int POTENTIOMETER_PIN = A0;
int angle = 0;
int valueOfPotentiometer = 0;

void setup() {
  // Set up servo and put to 0°.
  pinMode(PIN_9, OUTPUT);
  servoNumber1.write(0);
}

void loop() {
  // Get value of potentiometer.
  valueOfPotentiometer = analogRead(POTENTIOMETER_PIN);
  // Convert potentiometer value to angle.
  angle = valueOfPotentiometer / ANGLE_POTENTIOMETER_RATIO;
  // Go to angle.
  servoNumber1.write(angle);
}
