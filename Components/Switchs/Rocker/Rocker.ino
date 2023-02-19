/*
  Rocker

  It just turns on the builtin LED with the input from rocker switch.
*/

#define ROCKER 8

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ROCKER, INPUT);
}
 
void loop(){
  digitalWrite(LED_BUILTIN, digitalRead(ROCKER));
}
