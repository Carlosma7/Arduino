/*
  7 Color Flash LED

  It turns on and off the LED with intervals.
*/

#define LED 10
 
void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  digitalWrite(LED, HIGH);
  delay(10000);
  digitalWrite(LED, LOW);
  delay (2000);
}
