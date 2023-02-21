/*
  Reed Switch

  It just turns on the builtin LED when a magnetic field is detected.

*/

#define REED 8

void setup(){
  pinMode(REED, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  int value = digitalRead(REED);

  if (value == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }

  delay(200);
}
