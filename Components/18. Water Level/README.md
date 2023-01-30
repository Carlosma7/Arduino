# Water Level

## Components 
### Water Level

* A Water Level sensor is used to detect the amount of water found and depth of it.
* The power and sense traces form a variable resistor (much like a potentiometer) whose resistance varies based on how much they are exposed to water.
* One well-known issue with these sensors is that they have a shorter lifespan because they are constantly exposed to moisture. Moreover, constantly applying power to the sensor while immersed in water significantly accelerates the rate of corrosion.
* To avoid this, it is recommended that the sensor be turned on only when taking readings.

<img title="Water Level" src="https://www.makerlab-electronics.com/wp-content/uploads/2017/11/water-level-sensor_01.jpg" width=200/>

## Diagram

Here´s the following example of a Water Level sensor.

![Water Level diagram](./img/Water_Level_diagram.png)

## Example

Here´s the following example with a Water Level sensor. The code just prints the level on the serial monitor.

#### Demo
<p align="center"><img src="./img/Water_Level_demo.gif"/></p>

#### Code

* **analogRead(PIN);** reads an analog input from the analog PIN.

You can find the code [here](./Water_Level.ino).
