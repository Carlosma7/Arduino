/*
  4x1 Buttons

  It blinks the builtin LED x times depending on the button pressed.
*/

#define BTN1 6
#define BTN2 7
#define BTN3 8
#define BTN4 9

void setup(){
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  pinMode(BTN4, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(BTN1) == LOW){
    light_led(1);
  }else if(digitalRead(BTN2) == LOW){
    light_led(2);
  }else if(digitalRead(BTN3) == LOW){
    light_led(3);
  }else if(digitalRead(BTN4) == LOW){
    light_led(4);
  }
}

void light_led(int loops){
  Serial.println(loops);
  for(int i=0; i<loops; i++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  }
}
