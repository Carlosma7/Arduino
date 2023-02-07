/*
  Light Blocking

  It detects when light is cut and turns on a LED.
*/

#define LED 10
#define LIGHTBLOCKING 7
 
void setup(){
  pinMode (LED, OUTPUT);
  pinMode (LIGHTBLOCKING, INPUT);
}
 
void loop(){
  int value = digitalRead(LIGHTBLOCKING);
  if(value==HIGH){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
}
