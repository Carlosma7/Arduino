/*
  I2C OLED Display - Font

  It prints two different messages changing the font.
*/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSerif9pt7b.h>
#include <Fonts/FreeMonoBoldOblique9pt7b.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Declaration for a SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup(){
  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)){ // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    while(1);
  }
  delay(2000);
}

void loop(){
  // Set a font and display text
  display.setFont(&FreeSerif9pt7b);
  display.clearDisplay();
  display.setTextSize(1);             
  display.setTextColor(WHITE);        
  display.setCursor(0,20);             
  display.println("Hello, world!");
  display.display();
  delay(2000);
  // Set another font and display text
  display.setFont(&FreeMonoBoldOblique9pt7b);
  display.clearDisplay();
  display.setTextSize(1);             
  display.setTextColor(WHITE);        
  display.setCursor(0,20);             
  display.println("Hello, world!");
  display.display();
  delay(2000);
}
