
# Tilt Switch (Mercury)

## Components 
### Tilt Switch (Mercury)

* Tilt Switch (Mercury one) contains a drop of mercury with two pins that connects with the drop to make the voltage flow throught it.
* There are several types of tilt switches, but in this post we´ll study the basic mercury one, the KY-017 and KY-027.

**Tilt Switch**
<img title="LED" src="https://upload.wikimedia.org/wikipedia/commons/5/53/Mercury_Switch_without_housing.jpg" width=200/>

**KY-017**
<img title="LED" src="https://static2.efcomponentes.com.ar/5485-thickbox_default/modulo-optico-de-mercurio-ky-017.jpg" width=200/>

**KY-027**
<img title="LED" src="https://www.infootec.net/wp-content/uploads/2017/05/magic-light.jpg" width=200/>


## Diagram

Here are several examples of the three different types of tilt switches studied, in order to use them to turn on a LED (a F5 one or built-in one).

**Tilt Switch with F5**

![Tilt Switch diagram](./img/Tilt_Switch_diagram.png)

**KY-017**

![KY-017 diagram](./img/Tilt_Switch_KY017_diagram.png)

**KY-027**

![KY-027 diagram](./img/Tilt_Switch_KY027_diagram.png)

## Example
Here are the following examples, it uses the same diagrams as above and just turns the different LEDs.

#### Demo

**Tilt Switch**

<p align="center"><img src="./img/Tilt_Switch_demo.gif"/></p>

**KY-017**

<p align="center"><img src="./img/Tilt_Switch_KY017_demo.gif"/></p>

**KY-027**

<p align="center"><img src="./img/Tilt_Switch_KY027_demo.gif"/></p>

#### Code

* **pinMode(PIN, OUTPUT);** sets the pin with number *PIN* as an output signal to turn on the LED.
* **digitalWrite(PIN, VALUE);** writes a digital value (HIGH=1 or LOW=0) on the pin with number *PIN*. *HIGH* turns on the pin and *LOW* turns off.
* **digitalRead(PIN);** reads a digital value (HIGH=1 or LOW=0) on the pin with number *PIN*.

You can find the code [here](./Tilt_Switch.ino).
