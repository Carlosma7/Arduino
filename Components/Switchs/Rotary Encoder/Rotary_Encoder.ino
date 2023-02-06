/*
  Rotary Encoder

  It detects moves in the encoder to detect direction and just adds or substracts from initial position (0).
  If the push button is pressed, the position is reset to 0.
*/

#define PINCLK 2
#define PINDT 3
#define PINSW 7

int previous = 0;
volatile int position = 0;

void setup(){
  pinMode(PINCLK, INPUT);
  pinMode(PINDT, INPUT);
  pinMode(PINSW, INPUT_PULLUP);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(PINCLK), encoder, LOW);
}

void loop(){
  int pushButton = digitalRead(C);
  // LOW when pressed
  if(!pushButton){
    position = 0;
  }

  // If position is changed, print it on serial monitor
  if (position != previous) {
    Serial.println(position);
    previous = position;
  }
}

void encoder() {
  // Avoids rebounds by detecting interruptions with a threshold of 5 millis
  static unsigned long lastInterruption = 0;
  unsigned long timeInterruption = millis();

  if (timeInterruption - lastInterruption > 5){
    if (digitalRead(B) == HIGH){
      position++;
    }else{
      position--;
    }
    
    position = min(50, max(-50, position));
    lastInterruption = timeInterruption;
  }
}