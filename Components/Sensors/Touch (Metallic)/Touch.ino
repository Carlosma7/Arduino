/*
  Touch (Metallic)

  It just turns on/off the builtin LED when touching the sensor.
*/

#define DIGITAL 3

int analogPin = A0;

void setup(){
  Serial.begin (9600);
  pinMode (LED_BUILTIN, OUTPUT);
  pinMode (analogPin, INPUT);
}

void loop (){
  Serial.println(analogRead (analogPin));
  if(digitalRead(DIGITAL) == HIGH){
    digitalWrite (LED_BUILTIN, HIGH);
  }else{
    digitalWrite (LED_BUILTIN, LOW);
  }
}
