/*
  RGB LED

  Turns in order the RGB colors on the LED.
*/

#define RED 13
#define GRN 12
#define BLU 11
 
void setup() {
   pinMode(RED, OUTPUT);
   pinMode(GRN, OUTPUT);
   pinMode(BLU, OUTPUT);
}
 
void loop() {
   digitalWrite(RED, HIGH);
   digitalWrite(GRN, LOW);
   digitalWrite(BLU, LOW);
 
   delay(1000);
 
   digitalWrite(RED, LOW);
   digitalWrite(GRN, HIGH);
   digitalWrite(BLU, LOW);
 
   delay(1000);
 
   digitalWrite(RED, LOW);
   digitalWrite(GRN, LOW);
   digitalWrite(BLU, HIGH);
 
   delay(1000);
}