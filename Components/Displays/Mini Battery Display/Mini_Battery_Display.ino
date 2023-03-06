/*
  Mini Battery Display

  It turns on the different lights of the battery display like its charging.
*/

#include "TM1651.h"
#define CLK 4
#define DIO 2

TM1651 batteryDisplay(CLK, DIO);

void setup(){
  batteryDisplay.init();
  batteryDisplay.set(2); // Set brightness from 0 to 7
}

void loop(){
  for(uint8_t level = 0; level < 8; level ++){
    batteryDisplay.displayLevel(level);
    delay(500);
  }
}
