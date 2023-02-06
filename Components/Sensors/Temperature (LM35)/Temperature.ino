/*
  Temperature (LM35)

  It gets an analog input of the degrees in millivolts received, then the celsius are calculated.
*/

const int sensor = A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(sensor);
  float millivolts = (value / 1024.0) * 5000;
  float celsius = millivolts / 10; 
  Serial.print(celsius);
  Serial.println(" C");
  delay(2000);
}