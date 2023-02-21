/*
  Stepper

  It moves the stepper motor in one direction with speed, steps per revolutions and number of steps.
*/

#include <Stepper.h>
 
// Steps per revolution
#define STEPS 4096 
// Steps to take
#define NUMSTEPS 100
 
// Steps per revolution, IN1, IN3, IN2, IN4
Stepper stepper(STEPS, 8, 10, 9, 11);
 
void setup() {
  // Speed in RPM (1-9)
  stepper.setSpeed(3);
}
 
void loop() {
  // Move a number of steps (negative to go opposite direction)
  stepper.step(NUMSTEPS);
  
}