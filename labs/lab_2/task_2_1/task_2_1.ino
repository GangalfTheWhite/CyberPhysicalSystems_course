// Task 1 External interrupt, button on INT0
// focus: edge triggering
// Arduino: attachInterrupt
// Register: EICRA, EIMSK, EIFR

#include "sam.h"

#define PIN_LED 5 // D13 -> PB5
#define PIN_BUTTON 2 // D2 -> PD2

volatile byte LED_state = LOW;

// Using arduino functions
void setup(){
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), toggleLED, FALLING);
}

void loop(){
  digitalWrite(LED_PIN, LED_state);
}

void toggleLED(){
  LED_state != LED_state;
}

// Baremetal version (WIP)
/*
void setup() {
  // Enable the APB clock for the PORT module
  PM->APBBMASK.reg |= PM_APBBMASK_PORT;

  // Configure PIN_LED as output (set bit in DIRSET)
  PORT->Group[0].DIRSET.reg = (1 << PIN_LED);

  // Configure PIN_BUTTON as input
  PORT->Group[2].DIRCLR.reg = (1 << PIN_BUTTON);
}

void loop(){

}

void toggleLED(){

}
*/
