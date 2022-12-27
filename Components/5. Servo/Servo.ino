/*
  Servo

  Moves a Servo motor using the Servo library. Then it moves slightly
  the motor to different angles, and finally moves from 0 to 180 degrees.
*/

#include <Servo.h>

Servo myservo;

void setup(){
  myservo.attach(9); // Indicates pin for the Servo input
  myservo.write(0); // Initializes Servo position to 0 degrees
}

void loop(){
  myservo.write(0);
  delay(1000);
  myservo.write(60);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(120);
  delay(1000);
  myservo.write(150);
  delay(1000);
  myservo.write(180);
  delay(1000);
  myservo.write(150);
  delay(1000);
  myservo.write(120);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(60);
  delay(1000);

  myservo.write(0);
  delay(1000);
  myservo.write(180);
  delay(1000);
}
