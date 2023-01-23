# RGB LED

## Components 
### RGB LED

* Is used as indicator, using a low electricity and lasts really long.
* The main difference with a common LED is that it has four pins instead of two and represents three different colors.

<img title="RGB LED" src="https://proserquisa.com/principal/inicio/uploads/modulotricolor.jpg" width=200/>

## Diagram

Here´s the following example of a SMD tricolor LED connected to three pins for each color and another one to ground.

![RGB LED diagram](./img/RGB_LED_diagram.png)

## Example
Here are the following examples, it contains two examples of turning one and off the three different colors of the RGB code, one turning on/off and the other with fade effect.

#### Diagram
![RGB LED example](./img/RGB_LED_diagram.png)

#### Demo
<p align="center"><img src="./img/RGB_LED_demo.gif"/></p>

<p align="center"><img src="./img/RGB_LED_demo_fade.gif"/></p>

#### Code

* **pinMode(PIN, OUTPUT);** sets the pin with number *PIN* as an output signal to turn on the LED.
* **digitalWrite(PIN, VALUE);** writes a digital value (HIGH=1 or LOW=0) on the pin with number *PIN*. *HIGH* turns on the pin and *LOW* turns off.

You can find the code [here](./src).
