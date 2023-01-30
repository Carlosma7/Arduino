/*
  Water Level sensor

  It turns on and off the sensor and prints on the serial monitor the level of water.

*/

#define PIN_POWER 7
#define PIN_SENSOR A0

int water = 0;

void setup() {
  // Set power pin as output to indicate when to turn on/off
  pinMode(PIN_POWER, OUTPUT);
  digitalWrite(PIN_POWER, LOW);

  Serial.begin(9600);
}

// Reads water level avoiding corrosion
int readWaterLevel() {
  // Turn sensor on
  digitalWrite(PIN_POWER, HIGH);
  delay(10);
  // Read sensor
  water = analogRead(PIN_SENSOR);
  // Turn sensor off
  digitalWrite(PIN_POWER, LOW);
  return water;
}

void loop() {
  // Read water level
	int level = readWaterLevel();
	
	Serial.print("Water level: ");
	Serial.println(level);
	
	delay(1000);
}
