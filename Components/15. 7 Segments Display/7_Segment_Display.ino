/*
  7 Segment Display

  It shows numbers on a 7 Segments Display using a 74HC595 pin,
  from 9 to 0 in a countdown and then restarts it.
*/

// Define pins from 74HC595
#define LATCHPIN 3
#define CLOCKPIN 4
#define DATAPIN 2

// Digits representation using bytes
byte seven_seg_digits[10] = { B11111100,  // = 0
                              B01100000,  // = 1
                              B11011010,  // = 2
                              B11110010,  // = 3
                              B01100110,  // = 4
                              B10110110,  // = 5
                              B10111110,  // = 6
                              B11100000,  // = 7
                              B11111110,  // = 8
                              B11100110   // = 9
                             };
 
void setup(){
  pinMode(LATCHPIN, OUTPUT);
  pinMode(CLOCKPIN, OUTPUT);
  pinMode(DATAPIN, OUTPUT);
}
 
// Writes a number in the 7 Segment Display
void sevenSegWrite(byte digit) {
  // Sets LATCHPIN off, before sending data
  digitalWrite(LATCHPIN, LOW);
     
  // Sets data on the 7 Segments Display
  shiftOut(DATAPIN, CLOCKPIN, LSBFIRST, seven_seg_digits[digit]);  
 
  // Sets LATCHPIN on, after sending data
  digitalWrite(LATCHPIN, HIGH);
}
 
void loop() {       
  // Count from 9 to 0
  for (byte digit = 10; digit > 0; --digit) {
    delay(1000);
    sevenSegWrite(digit - 1); 
  }
   
  delay(3000);
}
