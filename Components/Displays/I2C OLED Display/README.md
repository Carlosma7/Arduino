# I2C OLED Display

## Components 
### I2C OLED Display

* The organic light-emitting diode (OLED) is the SSD1306 model: a monocolor, 0.96-inch display with 128×64 pixels.
* The OLED display doesn’t require backlight, which results in a very nice contrast in dark environments. Additionally, its pixels consume energy only when they are on, so the OLED display consumes less power when compared with other displays.
* This specific model comunnicates with the Arduino board using the I2C protocol.

<img title="I2C OLED Display" src="https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2016/09/ssd1306-oled-display-arduino.jpg?resize=750%2C412&quality=100&strip=all&ssl=1" width=200/>

## Diagram

Here´s the following example of a I2C OLED Display.

![I2C LCD Display diagram](./img/I2C_OLED_Display_diagram.png)

## Examples

### Write

Here´s the following example with a I2C LCD Display writing on it. It prints two messages in the screen to salute.

#### Demo

<p align="center"><img src="./img/I2C_OLED_Display_Write_demo.gif"/></p>

#### Code

You can find the code [here](./I2C_OLED_Display_Write.ino).

### Scroll

Here´s the following example with a I2C LCD Display scrolling a message on it. It scrolls a message horizontally in the screen and goes back.

#### Demo

<p align="center"><img src="./img/I2C_OLED_Display_Scroll_demo.gif"/></p>

#### Code

You can find the code [here](./I2C_OLED_Display_Scroll.ino).

### Font

Here´s the following example with a I2C LCD Display changing fonts. It prints two different messages changing the font.

#### Demo

<p align="center"><img src="./img/I2C_OLED_Display_Font_demo.gif"/></p>

#### Code

You can find the code [here](./I2C_OLED_Display_Font.ino).

### Draw

Here´s the following example with a I2C LCD Display drawing figures on it. It draws several forms on the display, using different figures and inverting one of them.

#### Demo

<p align="center"><img src="./img/I2C_OLED_Display_Draw_demo.gif"/></p>

#### Code

You can find the code [here](./I2C_OLED_Display_Draw.ino).

### Image

Here´s the following example with a I2C LCD Display displaying an image on it. It uses a bitmap in C code to display an image.

Here´s also a tutorial on [how to convert an image to bitmap in C](https://docs.splitkb.com/hc/en-us/articles/360013811280-How-do-I-convert-an-image-for-use-on-an-OLED-display-).

#### Demo

<p align="center"><img src="./img/I2C_OLED_Display_Image_demo.gif"/></p>

#### Code

You can find the code [here](./I2C_OLED_Display_Image.ino).
