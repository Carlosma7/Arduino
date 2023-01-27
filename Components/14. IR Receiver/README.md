
# IR Receiver

## Components 
### IR Receiver

* IR Receiver uses a 1838 IR Receiver that gets an Hexadecimal input from a IR signal.
* There are models like KY-022 that integrates a resistance and a LED together with the basic 1838 IR Receiver.

<img title="Temperature (LM35)" src="https://leantec.es/wp-content/uploads/2018/02/p_2_2_8_0_2280-MODULO-RECEPTOR-INFRARROJO-KY-022.jpg" width=200/>

## Diagram

Here´s the following example of a IR receiver that just outputs the signal received in the serial monitor.

![IR Receiver diagram](./img/IR_Receiver_diagram.png)

## Example

Here´s the following example with a IR Receiver. The code just prints the signal received in the serial monitor. It can be used to control received signals and interpret them.

#### Demo
<p align="center"><img src="./img/IR_Receiver_demo.gif"/></p>

#### Code

* **#include <IRremote.h>** from [IRremote](https://github.com/Arduino-IRremote/Arduino-IRremote).
* **IRrecv irrecv(RECV_PIN);** sets the PIN where to read from the IR signal.
* **decode_results results;** variable to store the obtained HEX values.
* **irrecv.enableIRIn();** enables the value reception on the receiver.
* **irrecv.decode(&results)** receives, decodes and stores results in *results*.

You can find the code [here](./IR_Receiver.ino).
