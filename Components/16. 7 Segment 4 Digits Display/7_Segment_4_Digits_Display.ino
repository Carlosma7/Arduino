/*
  7 Segment 4 Digits Display

  It acts like a chronometer displaying from 0 to 999 seconds and then
  it resets and starts again.
*/

#include "SevSeg.h"
SevSeg sevseg;


void setup(){
  // Number of digits of display
  byte numDigits = 4;
  // Digital pins (controls to turn them on or off)
  byte digitPins[] = {2, 3, 4, 5};
  // Segment pins (controls the segments to display number with them)
  byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};
  // Indicates if resistors were placed on digit pins
  bool resistorsOnSegments = 0; 
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
  // Indicate the brightness of the display
  sevseg.setBrightness(90);
}

void loop(){
  // Time until start of display
  static unsigned long execTime=millis()+1000;
  static int counter=0;

  if(millis()>=execTime){
    // Set next time for next number
    execTime+=100;
    counter++;
    // Reset counter
    if(counter==10000){
      counter=0;
    }
    // Set number on display
    sevseg.setNumber(counter,1);
  }
  // Refresh constantly the display
  sevseg.refreshDisplay();
}
