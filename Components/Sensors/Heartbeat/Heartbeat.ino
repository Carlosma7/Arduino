/*
  Heartbeat (KY-039)

  It measures the number of heartbeats per minute and prints them in the serial monitor.
*/

float factor = 0.75; // Factor to filter
float max = 0.0;
int minBetweenHearbeats = 300; // Minimum time between heartbeats
float previousValue = 500;
int heartbeats = 0; // Count heartbeats per minute

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Starting Measurements");
}

void loop() {
  static unsigned long timeMeasurement = millis();
  static unsigned long timeBetweenHeartbeats = millis();

  int value = analogRead(A0); // Read analog value from sensor

  float valueFiltered = factor * previousValue + (1 - factor) * value; // Filtered value calculation
  float difference = valueFiltered - previousValue; // Difference from previous value
  previousValue = valueFiltered; // Update value

  // If difference exceeds the maximum or 300 mseg has gone by
  if((difference >= max) && (millis() > timeBetweenHeartbeats + minBetweenHearbeats)){
    max = difference; // Update max
    digitalWrite(13, HIGH);
    timeBetweenHeartbeats = millis(); // Update time that has gone between heartbeats
    heartbeats++; // Add heartbeat

  }else{
    digitalWrite(13, LOW);
  }
  
  max = max * 0.97; // Reduce by 3% the max to not lose values measured

  if(millis() >= timeMeasurement + 15000) { // If 15 seconds goes by
    Serial.print("Heartbeats per minutes: ");
    Serial.println(heartbeats * 4); // Multiply heartbeats by 4 (1 minute)
    heartbeats = 0;
    timeMeasurement = millis();
  }

  delay(50);
}
