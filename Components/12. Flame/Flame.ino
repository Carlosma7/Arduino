/*
  Flame

  It gets a digital input from the flame sensor and turns on the Built-in LED.
*/

#define FLAME 2

void setup()
{
  pinMode(FLAME, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
  if (digitalRead(FLAME) == HIGH ){
    digitalWrite(LED_BUILTIN, HIGH);
  }else{
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(100);
}