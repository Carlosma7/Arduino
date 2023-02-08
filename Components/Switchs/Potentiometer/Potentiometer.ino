/*
  Potentiometer

  It gets the analogic value from the potentiometer and prints it on the serial monitor.
*/

void setup(){
  Serial.begin(9600);
}

void loop(){
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(200);
}