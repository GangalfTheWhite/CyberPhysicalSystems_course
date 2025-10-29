// Task 2: Pin change interrupt
// focus: Any pin change
// Arduino: none (custom ISR)
// Registers PCICR, PCMSKx

#include "sam.h"

#define LED_PIN 5 // D13 -> PB5
#define BUTTON_PIN 8 // D8 -> PB0

void setup(){
pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop(){
attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), toggleLED, FALLING);
}
