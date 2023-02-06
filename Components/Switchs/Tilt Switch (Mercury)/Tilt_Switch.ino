/*
  Tilt Switch (Mercury)

  It gets the input from a tilt switch KY-017 of mercury and turns on and off a LED.
*/

#define LED 7
#define MERCURY 8

void setup() {
  pinMode(MERCURY, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, digitalRead(MERCURY));
}