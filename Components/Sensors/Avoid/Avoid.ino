/*
  Avoid

  It detects whether an obstacle is ahead of the sensor and prints on the serial monitor and turns the builtin LED on.
*/

#define AVOID 2
#define ENABLEPIN 3


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(AVOID, INPUT);
  pinMode(ENABLEPIN, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  digitalWrite(ENABLEPIN, HIGH);
  int value = digitalRead(AVOID);
  if (value == LOW){
    Serial.println("Obstacle detected");
    digitalWrite(LED_BUILTIN, HIGH);
  }else{
    Serial.println("Clear");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(500);
}
