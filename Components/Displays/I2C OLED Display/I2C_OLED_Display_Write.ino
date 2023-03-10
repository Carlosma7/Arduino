/*
  I2C OLED Display - Write

  It prints two messages in the screen to salute.
*/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

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


  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
}

void loop(){
  // Write "Hello, world!"
  display.clearDisplay();
  display.setCursor(0, 10);
  display.println("Hello, world!");
  display.display(); 
  delay(1000);

  // Write "This is Carlosma7."
  display.clearDisplay();
  display.setCursor(0, 10);
  display.println("This is Carlosma7.");
  display.display(); 
  delay(1000);
}
