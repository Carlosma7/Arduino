/*
  Semaphore

  It turns on and off in order the different lights of the three colors of a semaphore.
*/

#define RED 3
#define YELLOW 4
#define GREEN 5

void setup(){
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop(){
  digitalWrite(RED, HIGH);
  delay(2000);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(2000);
  digitalWrite(GREEN, LOW);
}
