/*
  LCD Display

  It configures a LCD Display, prints on the first line "Hello world!" and in the second
  line a second counter.
*/

#include <LiquidCrystal.h>

// Set LCD with pins (rs, en, d4, d5, d6, d7)
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // Initialize LCS with number of cols and rows
  lcd.begin(16, 2);
  // Print a message on LCD
  lcd.print("Hello World!");
}

void loop() {
   // Change cursor position
  lcd.setCursor(0, 1);
   // Print seconds
  lcd.print(millis()/1000);
  lcd.print(" Seconds...");
  delay(100);
}
