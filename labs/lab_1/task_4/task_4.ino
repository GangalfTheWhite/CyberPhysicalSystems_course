#include "sam.h"

#define PIN_LED 10 // D4 -> PB10
#define PIN_INPUT 10 // D2 -> PA10

void setup() {
  // Enable the APB clock for the PORT module
  PM->APBBMASK.reg |= PM_APBBMASK_PORT;

  // Configure PIN_LED as output (set bit in DIRSET)
  PORT->Group[1].DIRSET.reg = (1 << PIN_LED);

  // Configure PIN_INPUT
  PORT->Group[0].DIRCLR.reg = (1 << PIN_INPUT);
}

void loop() {
  // Turn on LED
  PORT->Group[1].OUTSET.reg = (1 << PIN_LED);
  delay(1000);

  // Turn off LED
  PORT->Group[1].OUTCLR.reg = (1 << PIN_LED);
  delay(1000);
}
