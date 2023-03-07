/*
  LED

  Turns on in order with delays 4 LEDS, and then they are turned off in
  the same order with delays.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // White LED
  pinMode(12, OUTPUT);
  // Yellow LED
  pinMode(10, OUTPUT);
  // Green LED
  pinMode(6, OUTPUT);
  // Red LED
  pinMode(4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // Turn white on
  digitalWrite(12, HIGH);
  delay(500);
  // Turn yellow on
  digitalWrite(10, HIGH);
  delay(500);
  // Turn green on
  digitalWrite(6, HIGH);
  delay(500);
  // Turn red on
  digitalWrite(4, HIGH);
  delay(500);

  // Turn white off
  digitalWrite(12, LOW);
  delay(500);
  // Turn yellow off
  digitalWrite(10, LOW);
  delay(500);
  // Turn green off
  digitalWrite(6, LOW);
  delay(500);
  // Turn red off
  digitalWrite(4, LOW);
}
