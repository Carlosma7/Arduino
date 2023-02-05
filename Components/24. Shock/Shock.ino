/*
  Shock

  It just turns on the built-int LED if it receives a vibration.
*/

#define SHOCKPIN 2

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SHOCKPIN, INPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop(){
  if(digitalRead(SHOCKPIN) == LOW ){
    digitalWrite(LED_BUILTIN, HIGH);
  }else{
    digitalWrite(LED_BUILTIN, LOW);
  }
}
