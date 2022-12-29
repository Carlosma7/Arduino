/*
  Ultrasonic SR04

  Using the SR04 library, it uses the sensor to detect objects near. If
  the object is 10cm near or less, it turns a led on, if not it turns off.
*/

#include "SR04.h"

#define TRIG_PIN 8
#define ECHO_PIN 13

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

void setup(){
  // Initialize Serial Port
  Serial.begin(9600);
  // Led pin
  pinMode(6, OUTPUT);
  delay(1000);
}

void loop(){
  // Get the distance in cm from ultrasonic sensor
  a=sr04.Distance();
  // Print on serial monitor
  Serial.print(a);
  Serial.println("cm");
  // If distance is above 10cm, turn led off
  if(a > 10){
    digitalWrite(6, LOW);
  // If distance is below 10cm, turn led on
  }else{
    digitalWrite(6, HIGH);
  }

  delay(300);
}
