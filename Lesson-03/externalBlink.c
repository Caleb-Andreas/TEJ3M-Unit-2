// Created by Caleb Andreas
// Created on February 24, 2026
// This program blinks an external LED.

// Variables.
int pin5 = 5; // Set output to pin5.

void setup() {
  // Initialize digital pin LED_BUILTING as an output.
  pinMode(pin5, OUTPUT);
}

void loop() {
  digitalWrite(pin5, HIGH);  // Turn the LED on.
  delay(1000);                 // Wait for the length of variable blinkTime.
  digitalWrite(pin5, LOW);   // Turn the LED off by making the voltage LOW.
  delay(1000);                      // Wait for a second.
}
