/*
  Membrane Switch Module - Keypad

  Using the Keypad library, it uses the sensor to detect buttons pressed.
  Then it uses the serial monitor to show the pressed values.
*/

#include <Keypad.h>

// Matrix 4x4
const byte ROWS = 4;
const byte COLS = 4;

// Define the keypad
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Define the pins connected
byte rowPins[COLS] = {2, 3, 4, 5};
byte colPins[ROWS] = {6, 7, 8, 9};

// Initialize keypad with pins and keys
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  // Initialize serial monitor
  Serial.begin(9600);
}
  
void loop(){
  // Get key pressed on keypad
  char customKey = customKeypad.getKey();
  
  // If key has been pressed print on serial monitor
  if (customKey){
    Serial.println(customKey);
  }
}
