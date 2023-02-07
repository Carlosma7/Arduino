/*
  Ball Switch

  It just turns on the LED if the ball activates the switch.
*/

#define LED 10
#define BALLSWITCH 7
int Led  =  10;
int sensor = 7;
 
void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BALLSWITCH, INPUT);
}

void loop(){
  int value = digitalRead(BALLSWITCH);
  if(value==HIGH){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
}
