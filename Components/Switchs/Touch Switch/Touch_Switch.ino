/*
  Touch Switch

  It turns on and off the builtin LED by touching the switch.
*/

#define SWITCH 2
         
void setup(){
  pinMode(SWITCH, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  digitalWrite(LED_BUILTIN, digitalRead(SWITCH));
}
