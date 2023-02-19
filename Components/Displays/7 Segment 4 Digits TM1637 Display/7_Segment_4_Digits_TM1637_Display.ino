#include <TM1637Display.h>

#define CLK 3
#define DIO 4

TM1637Display display = TM1637Display(CLK, DIO);

// Create an array that turns all segments ON
const uint8_t allON[] = {0xff, 0xff, 0xff, 0xff};

// Create array to define segments to display word "live"
const uint8_t live[] = {
  SEG_D | SEG_E | SEG_F,                  // L
  SEG_B | SEG_C,                          // I
  SEG_B | SEG_C | SEG_D | SEG_E | SEG_F,  // V
  SEG_A | SEG_D | SEG_E | SEG_F | SEG_G   // E
};

// Create degree celsius symbol
const uint8_t celsius[] = {
  SEG_A | SEG_B | SEG_F | SEG_G,  // Degree symbol
  SEG_A | SEG_D | SEG_E | SEG_F   // C
};

void setup() {
  // Set the brightness to 5 (0=dimmest 7=brightest)
	display.setBrightness(5);
}

void loop() {
	
	// Set all segments ON
	display.setSegments(allON);

	delay(5000);
	display.clear();

	// Display from 0 to 9
	int i;
	for (i = 0; i < 10; i++) {
		display.showNumberDec(i);
		delay(1000);
	}

	delay(3000);
	display.clear();

  // Display a negative number
	display.showNumberDec(-14); // Prints _-14
	delay(5000);
	display.clear();
	
  // Display a number without leading zeros
	display.showNumberDec(26, false);	// Prints __26
	delay(5000);
	display.clear();
	
  // Display a number with leading zeros
	display.showNumberDec(26, true); // Prints 0026
	delay(5000);
	display.clear();
	
  // Display a number of 2 digits from position 1
	display.showNumberDec(14, false, 2, 1);	// Prints _14_
	delay(5000);
	display.clear();
	
  // Display a number of 3 digits from position 0
	display.showNumberDec(-5, false, 3, 0);	// Prints _-5_
	delay(5000);
	display.clear();

	// Display an hour (12:34)
	display.showNumberDecEx(1234, 0b11100000, false, 4, 0);

	delay(5000);
	display.clear();

	// Display a temperature
	int temperature = 22;
	display.showNumberDec(temperature, false, 2, 0);
	display.setSegments(celsius, 2, 2);

	delay(5000);
	display.clear();
	
	// Prints "LIVE"
	display.setSegments(live);

	delay(5000);
}
