// Created by Caleb Andreas
// Created on March 10, 2026
// This program rotates a servo with the Arduino.

#include <Servo.h>

Servo servoNumber1;

void setup() {
  // setup servo pins
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoNumber1.write(180);
  delay(1000);
  servoNumber1.write(0);
  delay(1000);
}
