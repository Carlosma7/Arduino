# LED

## Components 
### LED

* Is used as indicator, using a low electricity and lasts really long. Most common one is 5mm LED.
* mm refers to diameter of LED (3mm and 10mm are also common).
* It needs the use of a resistor to not burn out, as it needs to be connected to a voltage source and ground.
* It has an **Anode** (long) which is connected to voltage source trough resistor and a **Cathode** (short) which is connected directly to ground.

<img title="LED" src="https://pxt.azureedge.net/blob/03fec9ac9dbaee9f745ae2beda43fc15119c1c20/static/cp/learn/pins-tutorial/devices/led-polarity.jpg" width=200/>

### Resistor
* Resist the flow of electricity. The higher the value of the resistor, the more it resists and the less electrical current will flow through it. 
* We can use a resistor to limit how much current flows through the LED and therefore, how brightly it shines.
* The unit of resistance is called the Ohm, which is usually shortened to Ω the Greek letter Omega.
* Resistors do not have a positive and negative lead. They can be connected either way around.

<img src="https://res.cloudinary.com/rsc/image/upload/b_auto,c_pad,dpr_1.0,f_auto,h_303,q_auto,w_540/c_pad,h_303,w_540/R1991816-01?pgw=1" width=200/>

## Diagram

Here´s the following example of a F5 red LED connected to a 5V source using a resistor. Then the cathode of the led is connected to ground.

![LED diagram](./img/LED_diagram.jpeg)

## Example
Here´s the following example, it contains a semaphore that just turn on in order the LEDs using some delays.

#### Diagram
![LED example](./img/LED_example.png)

#### Demo
<p align="center"><img src="https://raw.githubusercontent.com/Carlosma7/Arduino/master/Components/1._LED/img/LED_demo.gif"/></p>

#### Code

* **pinMode(PIN, OUTPUT);** sets the pin with number *PIN* as an output signal to turn on the LED.
* **digitalWrite(PIN, VALUE);** writes a digital value (HIGH=1 or LOW=0) on the pin with number *PIN*. *HIGH* turns on the pin and *LOW* turns off.

You can find the code [here](https://github.com/Carlosma7/Arduino/blob/main/Components/1._LED/LED.ino).
