// Created by Caleb Andreas
// Created on February 18, 2026
// This program blinks but every time the light will increase in the amount of time that it is on.

int blinkTime = 1000; // Set variable to 1000.

void setup() {
  // Initialize digital pin LED_BUILTING as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED on.
  delay(blinkTime);                 // Wait for the length of variable blinkTime.
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED off by making the voltage LOW.
  delay(1000);                      // Wait for a second.

  blinkTime = blinkTime + 1000;     // Add 1 second to variable blinkTime.
}
