/*
  RGB LED

  Turns in order the RGB colors on the LED with a fade effect.

  Warning: You should use the digital (pwm) pins.
*/

#define RED 11
#define GRN 10
#define BLU 9
 
void setup() {
   pinMode(RED, OUTPUT);
   pinMode(GRN, OUTPUT);
   pinMode(BLU, OUTPUT);
}
 
void loop() {
   for (int i = 0; i <= 255; i++) {
      analogWrite(RED, i);
      delay(5);
   }
   for (int i = 255; i >= 0; i--) {
      analogWrite(RED, i);
      delay(5);
   }

   for (int i = 0; i <= 255; i++) {
      analogWrite(GRN, i);
      delay(5);
   }
   for (int i = 255; i >= 0; i--) {
      analogWrite(GRN, i);
      delay(5);
   }

   for (int i = 0; i <= 255; i++) {
      analogWrite(BLU, i);
      delay(5);
   }
   for (int i = 255; i >= 0; i--) {
      analogWrite(BLU, i);
      delay(5);
   }
}