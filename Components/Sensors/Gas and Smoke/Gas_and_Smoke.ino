/*
  Gas MQ-2

  It gets the ambient gas by digital an analog values and prints both of them on serial monitor.
*/

#define PINMQ 2;

void setup() { 
  Serial.begin(9600);
  pinMode(PINMQ, INPUT);
}


void loop() {
  
  bool mqState = digitalRead(PINMQ);
  if(mqState){
    Serial.println("No gas detected");
  }else{
    Serial.println("Gas detected");
  }
  delay(100); 

  int adcMQ = analogRead(A0);
  float voltage = adcMQ * (5.0 / 1023.0);

  Serial.print("ADC:");
  Serial.print(adcMQ);
  Serial.print("    VOLTAGE:");
  Serial.println(voltage);
  delay(2000);
}