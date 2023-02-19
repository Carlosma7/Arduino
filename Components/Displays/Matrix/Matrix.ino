/*
	Matrix

  It prints by order some letters and digits on the display.
*/

#include "LedControl.h"

LedControl lc=LedControl(8,6,7,1);

// Define letters in byte codes
byte letter_c[8] = {
  B01111110,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01111110
};

byte letter_a[8] = {
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01111110,
  B01000010,
  B01000010,
  B01000010
};

byte letter_r[8] = {
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01111100,
  B01001000,
  B01000100,
  B01000010
};

byte letter_l[8] = {
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01111110
};

byte letter_o[8] = {
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01111110
};

byte letter_s[8] = {
  B00111110,
  B01000000,
  B01000000,
  B01000000,
  B00111100,
  B00000010,
  B00000010,
  B01111100
};

byte letter_m[8] = {
  B01000010,
  B01100110,
  B01011010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010
};

byte number_7[8] = {
  B01111100,
  B00000100,
  B00000100,
  B00001000,
  B00010000,
  B00100000,
  B00100000,
  B00100000
};

void setup(){
  lc.shutdown(0, false); // Turn on matrix
  lc.setIntensity(0, 4); // Set brightness intensity
  lc.clearDisplay(0); // Clear the matrix
}

void loop(){
  // Function to display username
  display_username();
}

void display_username(){
  // Display letter by letter with delays
  for(int x=0; x<8; x++){
    lc.setRow(0, x, letter_c[x]);
  }
  delay(500);
  for(int x=0; x<8; x++){
    lc.setRow(0, x, letter_a[x]);
  }
  delay(500);
  for(int x=0; x<8; x++){
    lc.setRow(0, x, letter_r[x]);
  }
  delay(500);
  for(int x=0; x<8; x++){
    lc.setRow(0, x, letter_l[x]);
  }
  delay(500);
  for(int x=0; x<8; x++){
    lc.setRow(0, x, letter_o[x]);
  }
  delay(500);
  for(int x=0; x<8; x++){
    lc.setRow(0, x, letter_s[x]);
  }
  delay(500);
  for(int x=0; x<8; x++){
    lc.setRow(0, x, letter_m[x]);
  }
  delay(500);
  for(int x=0; x<8; x++){
    lc.setRow(0, x, letter_a[x]);
  }
  delay(500);
  for(int x=0; x<8; x++){
    lc.setRow(0, x, number_7[x]);
  }
  delay(500);
}