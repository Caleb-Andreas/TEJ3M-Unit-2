// Created by Caleb Andreas
// Created on March 24, 2026
// This program measures distance using the sonar with the Arduino.

// Variables.
const int trigPin = 5;
const int echoPin = 4;
float duration;
float distance;

void setup() {
  // Set input and output pins for sonar.
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Send out pulses.
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW);

  // Listen.
  duration = pulseIn(echoPin, HIGH);
  // Calculate distance.
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");  
  Serial.println(distance);  
  delay(100);
}
