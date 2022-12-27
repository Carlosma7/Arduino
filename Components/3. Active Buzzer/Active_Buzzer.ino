/*
  LED

  Turns on the buzzer three times with a delay of 1 second and then turns
  on the buzzer a thousand times with a delay of 1 ms to produce different
  frequencies.
*/

int buzzer = 12;
void setup()
{
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
}

void loop()
{
  // Frequency of 1 second
  for(int i=0;i<3;i++){
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(buzzer,LOW);
    delay(1000);
  }

  // Frequency of 1 ms
  for(int i=0;i<1000;i++){
    digitalWrite(buzzer,HIGH);
    delay(1);
    digitalWrite(buzzer,LOW);
    delay(1);
  }
  delay(1000);
} 
