/*
  Sound Sensor

  It gets a digital input from the sound sensor, if there is one, it turns on/off the LED.
*/

#define PINLED 7; 
#define PINMICRO 9;
bool pinState;

void setup(){
  pinMode(PINLED, OUTPUT);
  pinMode(PINMICRO, INPUT_PULLUP);
}

void loop(){
  bool sound = digitalRead(PINMICRO); 
  if (sound == true){
    pinState = ! pinState;
    digitalWrite(PINLED , pinState);
    delay(500);
  }
  delay(10);
}
