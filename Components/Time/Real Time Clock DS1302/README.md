# Real Time Clock DS1302

## Components 
### Real Time Clock DS1302

* The DS1302 RTC clock module allows setting the date and time, contains a real-time clock-calendar with 31 bytes of static RAM. The clock module provides information on seconds, minutes, days, weeks, months and years. 
* The number of days in each month is automatically adjusted, there is also a leap year compensation function. It includes a battery cell with which you can keep the date updated.
* You should set once the datetime and after that comment the set command line, to avoid overriding actual time.

<img title="Real Time Clock DS1302" src="https://eloctavobit.com/wp-content/uploads/2020/12/rtc-modulo-reloj-ds1302.jpg" width=200/>

## Diagram

Here´s the following example of a Real Time Clock DS1302.

![Real Time Clock DS1302 diagram](./img/Real_Time_Clock_DS1302_diagram.png)

## Example

Here´s the following example with a Real Time Clock DS1302. It sets the time and prints it on the serial monitor second by second.

#### Demo
<p align="center"><img src="./img/Real_Time_Clock_DS1302_demo.gif"/></p>

#### Code

You can find the code [here](./Real_Time_Clock_DS1302.ino).
