/*
  PIR

  It sets the PIR pin, waits until it is ready and then just turns on the builtin LED when motion is detected.
*/

const int LEDPin= 13;
const int PIRPin= 2;
void setup(){
  pinMode(LEDPin, OUTPUT);
  pinMode(PIRPin, INPUT);
  delay(20000);
}

void loop(){
  int value= digitalRead(PIRPin);
 
  if (value == HIGH){
    digitalWrite(LEDPin, HIGH);
    delay(5000);
  }else{
    digitalWrite(LEDPin, LOW);
  }
}
