/*
   IR Receiver

   It gets IR signal and decodes the HEX value to print it in the serial monitor.

   IRremote library: https://github.com/Arduino-IRremote/Arduino-IRremote
*/

#include <IRremote.h>

int RECV_PIN = 9;
IRrecv irrecv(RECV_PIN);
decode_results results;

const int KEY_UP = 4294967295;
const int KEY_DOWN = 4294967296;
const int KEY_LEFT = 4294967297;
const int KEY_RIGHT = 4294967298;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Enable IR reception
}

void loop() {
  if (irrecv.decode(&results)){
    irrecv.resume(); // Start new reception
    // Print corresponding key
    switch (results.value) {
      case KEY_UP:
        Serial.println("KEY UP");
        break;
      case KEY_DOWN:
        Serial.println("KEY DOWN");
        break;
      case KEY_LEFT:
        Serial.println("KEY LEFT");
        break;
      case KEY_RIGHT:
        Serial.println("KEY RIGHT");
        break;
    }
    // Print HEX value
    Serial.print(results.value);
  }
  delay(300);
}
