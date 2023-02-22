/*
  I2C LCD Display

  It configures a LCD Display, prints two scrolling messages on different lines.
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  // Initialize the LCD
  lcd.begin();
  // Turn on the blacklight
  lcd.setBacklight((uint8_t)1);

  // Write messages
  lcd.setCursor(10, 0);
  lcd.print("Carlosma7/Arduino");
  lcd.setCursor(5, 1);
  lcd.print("Tutorial LCD, Scrolling...");
}

void loop(){
  // Scroll to the left
  lcd.scrollDisplayLeft();
  delay(500);
}
