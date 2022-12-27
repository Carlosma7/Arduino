/*
  Passive Buzzer

  Defines a list of melodies using pitches library and reproduces several tones for
  the main musical notes.
*/

#include "pitches.h"
 
int melodies[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500; // ms
 
void setup() {
 
}
 
void loop() {  
  for (int note = 0; note < 8; note++) {

    tone(12, melodies[note], duration);
     
    delay(1000);
  }
   
  delay(2000);
}
