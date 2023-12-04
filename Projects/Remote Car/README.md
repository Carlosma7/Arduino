# Remote Car

## Components 

* **Remote Car Chasis Kit**: There are thousands of e-shops where you could buy one. I bought a cheap one on [AliExpress](https://aliexpi.com/vBZr).
* [Passive Buzzer](../../Components/Emitters/Passive%20Buzzer) to ring a fragment of the song [Take On Me](https://youtu.be/djV11Xbc914?si=9cYVGkmO_Eh_v8XO) by A-ha.
* [I2C OLED Display](../../Components/Displays/I2C%20OLED%20Display) to display the different moods in emojis.
* [6AA Batteries Power Supply](../../Components/Power/6AA%20Batteries%20Power%20Supply) to power the whole project.
* [HC-06](https://naylampmechatronics.com/blog/12_tutorial-basico-de-uso-del-modulo-bluetooth-hc-06-y-hc-05.html) to connect via Bluetooth.
* **Arduino** (included in pack).

## Assembly

I´ve followed the steps detailed in [goldscrew "Arduino Obstacle Avoiding Robot Car 2WD With AA Battery" tutorial](https://www.instructables.com/Arduino-Obstacle-Avoiding-Robot-Car-2WD-With-AA-Ba/) on instructables.com and adapted to my own purposes.

## Diagram

Once all the skeleton has been assembled, we proceed with the wiring to control all the structure with the HC-06 as the data receiver to control and the L298N to control motors.

Now we use this diagram to connect the wires to all components:

![Diagram](./img/Remote_Carlos.png)

## Code

To control the whole structure, I´v written the following code [here](./Remote_Car.ino).

## Demo

Here´s a GIF of the car moving and displaying some faces:

<p align="center"><img src="./img/Remote_Car_GIF.gif"/></p>

You have the whole video with sound (to check the buzzer ringing "Take On Me") [here](./Remote_Car_Video.mp4).

