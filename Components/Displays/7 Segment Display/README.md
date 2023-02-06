# 7 Segment Display

## Components 
### 7 Segment Display

* 7 Segment Display uses 7 leds in order to represent a digit, making use of 10 pins to configure it.
* Also using a 74HC595 as an offset register allows to ease the setting up of the display.

<img title="7 Segment Display" src="https://www.perintang.com/wp-content/uploads/2019/03/09191-1.jpg" width=200/>

<img title="74HC595" src="https://leantec.es/wp-content/uploads/2018/02/p_7_2_5_725-74HC595-74595-SN74HC595N-8-Bit-Shift-Register-DIP-16.jpg" width=200/>

## Diagram

Here´s the following example of a 7 Segment Display being controlled with a 74HC595 that just displays a number.

![7 Segment Display diagram](./img/7_Segment_Display_diagram.png)

## Example

Here´s the following example with a 7 Segment Display and a 74HC595. The code just displays a countdown from 9 to 0 in the display.

#### Demo
<p align="center"><img src="./img/7_Segment_Display_demo.gif"/></p>

#### Code

* **shiftOut(DATAPIN, CLOCKPIN, LSBFIRST, seven_seg_digits[digit]);** sets the bytes to the display to represent a digit.

You can find the code [here](./7_Segment_Display.ino).
