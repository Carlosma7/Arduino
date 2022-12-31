# Analog Joystick

## Components 
### Analog Joystick
* Analog Joystic module is used to control movements as in a console game.
* Module has 5 pins: VCC, GND, X, Y, SW.
* X and Y are controlled by analog pins.

<img title="Analog Joystick" src="https://www.best-microcontroller-projects.com/image-files/joystick-capped-400r.jpg" width=200/>

## Diagram

Here´s the following example of a Analog Joystick connected to 5 pins, 2 of them analog.

![Analog Joystick diagram](./img/Analog_Joystick_diagram.png)

## Example
Here´s the following example, it uses the same diagram as above and just prints on serial monitor the moves done on axis.

#### Demo

<p align="center"><img src="./img/Analog_Joystick_demo.gif"/></p>

#### Code

* **digitalWrite(SW_pin, HIGH);** sets the joystick as active to use it.
* ****
* **analogRead(PIN)** reads an analog value from the corresponding axis of the joystick.

You can find the code [here](./Analog_Joystick.ino).