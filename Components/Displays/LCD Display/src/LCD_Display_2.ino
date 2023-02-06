/*
  LCD Display

  It configures a LCD Display, prints two scrolling messages on different lines.
*/

#include <LiquidCrystal.h>

// Set LCD with pins (rs, en, d4, d5, d6, d7)
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // Initialize LCS with number of cols and rows
  lcd.begin(16, 2);
  // Write messages
  lcd.setCursor(10, 0);
  lcd.print("Carlosma7/Arduino");
  lcd.setCursor(5, 1);
  lcd.print("Tutorial LCD, Scrolling...");
}

void loop() {
  // Scroll to the left
  lcd.scrollDisplayLeft(); 
  delay(250);
}
