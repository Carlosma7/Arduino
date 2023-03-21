# MeArm

## Components 

* **MeArm** skeleton: There are thousands of e-shops where you could buy one. I bought a cheap one on [AliExpress](https://aliexpi.com/ghY3), but if it´s affordable I would suggest a higher quality one.
* 4 [Servos](../../Components/Motors/Servo) to move the 4 degrees of freedom of the arm (included in previous pack).
* 2 [Analog Joysticks](../../Components/Buttons/Analog%20Joystick) control the movement of the 4 degrees of freedom of the arm (HU-M16 shield included in pack).
* **Arduino** (included in pack).

## Assembly

I´ve followed the steps detailed in [ted99tw MeArm tutorial](https://www.instructables.com/meArmJoystick-DIY/) on instructables.com

After following all the steps above, you should have something like:

![Ted´s MeArm](https://content.instructables.com/FLH/POLD/I2XTRZ3U/FLHPOLDI2XTRZ3U.jpg?auto=webp&frame=1&fit=bounds&md=94ae4b4abf4d0865a50c7e1f41a6d55e)

Due to the cheap materials, mine is not so good looking, but stills works and you can see here my result:

![Carlos´s MeArm](./img/MeArm_Carlos.jpeg)

## Diagram

Once all the skeleton has been assembled, we proceed with the wiring to control all the structure with the joysticks as controllers and servos as motors. I´ve used a [HU-M16 Double Joystick Shield](https://aliexpi.com/fnpe) to ease all the wiring, by just assembling the shield with the arduino and then wiring all the different servos to the corresponding triple of pins (one per digital input):

![HU-M16](./img/HU-M16.jpeg)

Now we use this diagram to connect the wires to each triple pin:

![Diagram](https://content.instructables.com/FEV/3GUQ/I2XTS0KT/FEV3GUQI2XTS0KT.jpg?auto=webp&frame=1&width=590&fit=bounds&md=7aa793effc55da63d7707b71c20d1b7f)

## Code

To control the whole structure, I found this sketch from [ted99tw](https://www.instructables.com/meArmJoystick-en/) which I really like and uses the diagram from above (same author). It just controls the different servos making use of the analog inputs from the joysticks independently.

You can find the code [here](./MeArm.ino).

## Demo

As I´ve mentioned earlier, the quality of the skeleton wasn´t really good, so it has led to a rough structure that moves with some difficulty.

<p align="center"><img src="./img/Wrong_demo.gif"/></p>

Even it works, I find more useful for a demo this one uploaded by [Leopoldo Armesto](https://www.youtube.com/watch?v=90KKBzwhgdY&ab_channel=LeopoldoArmesto) on his youtube channel, picking up an object and moving it.

<p align="center"><img src="./img/Leopoldo_Armesto_demo.gif"/></p>

