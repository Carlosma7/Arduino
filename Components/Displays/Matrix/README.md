# Matrix

## Components 
### Matrix

* LED displays are often packaged as matrixes of LEDs arranged in rows of common anodes and columns of common cathodes, or the reverse.
* To control an individual LED, you set its column LOW and its row HIGH. To control multiple LEDs in a row, you set the row HIGH, then take the column high, then set the columns LOW or HIGH as appropriate; a LOW column will turn the corresponding LED ON, and a HIGH column will turn it off.
* Some integrated modules also proposes an easier solution by providing the MAX7219 controller together, or also joining several matrixes together.

<img title="Matrix" src="https://leantec.es/wp-content/uploads/2018/02/p_1_3_3_5_1335-Matriz-led-8x8-con-MAX7219-Arduino-Matrix-Prototipos-cascada.jpg" width=200/>

## Diagram

Here´s the following example of a Matrix display.

![Matrix diagram](./img/Matrix_diagram.png)

Here´s the following example of a 4 Matrix display.

![Matrix 4 diagram](./img/Matrix_4_diagram.png)

## Example

Here´s the following example with a Matrix display and later with a 4 Matrix display. It just displays my username, either showing letter by letter or scrolling.

#### Demo
<p align="center"><img src="./img/Matrix_demo.gif"/></p>

<p align="center"><img src="./img/Matrix_4_demo.gif"/></p>

#### Code

You can find the code for Matrix example [here](./Matrix.ino) and the code for 4 Matrix example [here](./Matrix_4.ino).
