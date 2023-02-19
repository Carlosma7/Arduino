/*
  Matrix 4 displays

  It prints by order some letters and digits on the 4 displays.
*/

#include "LedControl.h"

LedControl lc=LedControl(8,6,7,4);

// Define word by defining letter by letter the byte codes
byte carlosma7[9][8] = {
{
  B01111110,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01111110
},
{
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01111110,
  B01000010,
  B01000010,
  B01000010
},
{
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01111100,
  B01001000,
  B01000100,
  B01000010
},
{
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01111110
},
{
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01111110
},
{
  B00111110,
  B01000000,
  B01000000,
  B01000000,
  B00111100,
  B00000010,
  B00000010,
  B01111100
},
{
  B01000010,
  B01100110,
  B01011010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010
},
{
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01111110,
  B01000010,
  B01000010,
  B01000010
},
{
  B01111100,
  B00000100,
  B00000100,
  B00001000,
  B00010000,
  B00100000,
  B00100000,
  B00100000
}};

int pos_chars[4] = {0, 1, 2, 3};

void setup(){
  for(int x=0; x<4; x++){
    lc.shutdown(x, false); // Turn on matrix
    lc.setIntensity(x, 4); // Set brightness intensity
    lc.clearDisplay(x); // Clear the matrix
  }
  Serial.begin(9600);
}

void loop(){
  // Function to display scrolling the username
  display_username();
}

void display_char(int pos, byte value[8]){
  // Set one char per display
  for(int x=0; x<8; x++){
    lc.setRow(pos, x, value[x]);
  }
}

void display_username(){
  // Read the corresponding char for the position and advance pos
  display_char(3, carlosma7[pos_chars[0]]);
  pos_chars[0] = (pos_chars[0] + 1) % 9;
  display_char(2, carlosma7[pos_chars[1]]);
  pos_chars[1] = (pos_chars[1] + 1) % 9;
  display_char(1, carlosma7[pos_chars[2]]);
  pos_chars[2] = (pos_chars[2] + 1) % 9;
  display_char(0, carlosma7[pos_chars[3]]);
  pos_chars[3] = (pos_chars[3] + 1) % 9;
  delay(500);
}