#include <Arduino.h>

// Blink LED Example
// Turns LED on for 1 second, off for 1 second, forever

int ledPin = 13;   // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);   // set the pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH);  // turn LED ON
  delay(1000);                 // wait 1000 ms = 1 second

  digitalWrite(ledPin, LOW);   // turn LED OFF
  delay(1000);                 // wait 1 second
}