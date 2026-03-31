// Created by Caleb Andreas
// Created on March 31, 2026
// This program measures distance then rotates a servo if the distance is over 50 cm with the with the Arduino.

#include <Servo.h>

// Variables.
const int TRIGPIN = 5;
const int ECHOPIN = 4;
const int SERVOPIN = 2;
int add;
int angle;
float duration;
float distance;

Servo servoNumber1;

void setup() {
  // Set input and output pins for sonar.
  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  Serial.begin(9600);
  // Set output for servo to pin 2 and make it go to 0°.
  servoNumber1.attach(SERVOPIN);
  servoNumber1.write(0);
}

void loop() {
  // Send out pulses.
  digitalWrite(TRIGPIN, LOW);  
  delayMicroseconds(2);  
  digitalWrite(TRIGPIN, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(TRIGPIN, LOW);

  // Listen.
  duration = pulseIn(ECHOPIN, HIGH);
  // Calculate distance.
  distance = (duration*.0343)/2;

  // If distance is greater or equal to 50 cm.
  if (distance >= 50) {
    if (angle == 180) {
      // If angle reaches 180° start going other way (subtract).
      add = -1;
    } else if (angle == 0) {
      // If angle reaches 0° start going other way (add).
      add = 1;
    }
    // Change angle to go to.
    angle = angle + add;
    // Start moving.
    servoNumber1.write(angle);
  }
}
