/*
  Relay 5V

  It just turns on and off the relay (turning on the built-in led too).
*/

void setup(){
  pinMode(7, OUTPUT);
}

void loop(){
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
}
