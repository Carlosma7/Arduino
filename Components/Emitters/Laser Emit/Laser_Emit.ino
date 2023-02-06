/*
  Laser Emit

  It turns on and off the laser with an interval of 5 seconds.
*/

#define PIN 9

void setup(){
  pinMode(PIN, OUTPUT);
}
 
void loop(){
  digitalWrite(PIN, HIGH);
  delay(5000);
  digitalWrite(PIN, LOW);
  delay(5000);
}
