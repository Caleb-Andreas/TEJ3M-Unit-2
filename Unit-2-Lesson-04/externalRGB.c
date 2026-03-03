// Created by Caleb Andreas
// Created on March 3, 2026
// This program goes through the colours of an external RGB LED.

// Variables.
int pin5 = 5; // Set red output to pin5.
int pin6 = 6; // Set green output to pin6.
int pin7 = 7; // Set blue output to pin7.

void setup() {
  // Initialize digital pin LED_BUILTING as an output.
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
}

void loop() {
  digitalWrite(pin5, HIGH);  // Turn red on.
  digitalWrite(pin6, LOW);   // Turn green off.
  digitalWrite(pin7, LOW);   // Turn blue off.
  delay(1000);               // Wait for a second.
  
  digitalWrite(pin5, LOW);   // Turn red off.
  digitalWrite(pin6, HIGH);  // Turn green on.
  digitalWrite(pin7, LOW);   // Turn blue off.
  delay(1000);               // Wait for a second.
  
  digitalWrite(pin5, LOW);   // Turn red off.
  digitalWrite(pin6, LOW);   // Turn green off.
  digitalWrite(pin7, HIGH);  // Turn blue on.
  delay(1000);               // Wait for a second.
  
  digitalWrite(pin5, HIGH);  // Turn red on.
  digitalWrite(pin6, HIGH);  // Turn green on.
  digitalWrite(pin7, LOW);   // Turn blue off.
  delay(1000);               // Wait for a second.
  
  digitalWrite(pin5, LOW);   // Turn red off.
  digitalWrite(pin6, HIGH);  // Turn green on.
  digitalWrite(pin7, HIGH);  // Turn blue on.
  delay(1000);               // Wait for a second.
  
  digitalWrite(pin5, HIGH);  // Turn red on.
  digitalWrite(pin6, LOW);   // Turn green off.
  digitalWrite(pin7, HIGH);  // Turn blue on.
  delay(1000);               // Wait for a second.
  
  digitalWrite(pin5, HIGH);  // Turn red on.
  digitalWrite(pin6, HIGH);  // Turn green on.
  digitalWrite(pin7, HIGH);  // Turn blue on.
  delay(1000);               // Wait for a second.
}
