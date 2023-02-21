# Stepper

## Components 
### Stepper

* A stepper motor, like the 28BYJ-48 is a small, low-priced single-pole stepper motor. The electrical characteristics of the 28BYJ-48 are modest, but it incorporates an integrated gearbox which makes it a much more useful and interesting component.
* The 28BYJ-48 has a step of 5,625 degrees (64 steps per turn). The internal gearbox has a ratio of 1/64. Combined, the total accuracy is 4096 steps per turn, equivalent to a step of 0.088º, which is a very high accuracy.
* For the control of the 28BYJ-48 we are going to use a board with the ULN2003 integrated. The ULN2003 is a group of 7 Darlington pairs of which we will use 4, one for each phase of the stepper motor.
* A Darlington pair is a device that allows us to supply a higher current than we could using the Arduino outputs directly.

<img title="Stepper" src="https://lh4.googleusercontent.com/JRdKCD8UyudITGGyxt7A5xbCQESTkwvhrgboI00vJFA1VZbytiN_xVmHhFQm46ftscp3q_TdqnUYOoKgrioLFxyaP3ZzzbPHzv5e2SGX2Q7cNpDok72jlK9-DRQA1pRYJoS3UwCn" width=200/>

## Diagram

Here´s the following example of a Stepper motor.

![Stepper diagram](./img/Stepper_diagram.png)

## Example

Here´s the following example with a Stepper motor. It moves the stepper motor in one direction with speed, steps per revolutions and number of steps.

#### Demo
<p align="center"><img src="./img/Stepper_demo.gif"/></p>

#### Code

You can find the code [here](./Stepper.ino).
