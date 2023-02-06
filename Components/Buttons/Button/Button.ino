/*
  Button
  Uses button on pin 4 to turn on the light and button
  on pin 10 to turn it off.
*/

int greenPin = 6;
int onButtonPin = 4;
int offButtonPin = 10;

void setup() 
{
  pinMode(greenPin, OUTPUT);
  pinMode(onButtonPin, INPUT_PULLUP);  
  pinMode(offButtonPin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(onButtonPin) == LOW)
  {
    digitalWrite(greenPin, HIGH);
  }
  if (digitalRead(offButtonPin) == LOW)
  {
    digitalWrite(greenPin, LOW);
  }
}
