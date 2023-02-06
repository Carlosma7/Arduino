/*
  Photoresistor

  Captures amount of light and just prints it in the serial monitor.
*/

int photoPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(photoPin);
  Serial.println(light);
  delay(1000);
}
