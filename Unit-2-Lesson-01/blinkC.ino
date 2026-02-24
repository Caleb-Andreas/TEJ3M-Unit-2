// Created by Caleb Andreas
// Created on Febuary 11, 2026
// This program blinks the light on and off.

void setup() {
  // Initialize digital pin LED_BUILTIN as an otuput.
  pinMode(LED_BUILTIN, OUTPUT);
}

// The loop fuction runs over and over again forever.
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED on (HIGH is the voltage level).
  delay(1000);                      // Wait for a second.
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED off by making the voltate LOW.
  delay(1000);                      // Wait for a second.
}
