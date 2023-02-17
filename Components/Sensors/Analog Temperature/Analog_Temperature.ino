/*
  Analog Temperature

  Reads from analog input the ambient temperature and displays it on the serial monitor.
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int temperature = analogRead(A0);

  // Calculate thermometer resistance comparing to modules onboard 10K-ohm resistor
  float resistance = 10000 * (1023.0 / (float)temperature - 1.0);

  // Calculate temperature in Celsius
  float tempC = (1.0 / (0.001129148 + (0.000234125*log(resistance)) + 0.0000000876741*log(resistance)*log(resistance)*log(resistance)))-273.15;

  Serial.print("Temperature Cº: ");
  Serial.println(tempC);

  delay(2000);
}
