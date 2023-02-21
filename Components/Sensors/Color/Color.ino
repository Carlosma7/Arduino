/*
	Color (TCS230)

	It just shows on the serial monitor the RGB values and prints the color detected.
*/

#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define PINOUT 8

// Calibration values from Calibration Sketch
int redMin = 36; // Red minimum value
int redMax = 230; // Red maximum value
int greenMin = 36; // Green minimum value
int greenMax = 290; // Green maximum value
int blueMin = 36; // Blue minimum value
int blueMax = 235; // Blue maximum value

// Color width measurements
int redPW = 0;
int greenPW = 0;
int bluePW = 0;

// Final values
int redValue;
int greenValue;
int blueValue;

void setup() {
	pinMode(S0, OUTPUT);
	pinMode(S1, OUTPUT);
	pinMode(S2, OUTPUT);
	pinMode(S3, OUTPUT);

	pinMode(PINOUT, INPUT);

	digitalWrite(S0,HIGH);
	digitalWrite(S1,LOW);

	Serial.begin(9600);
}

void loop() {
	// Read Red value
	redPW = getRedPW();
	// Map to 0-255 scale
	redValue = map(redPW, redMin,redMax,255,0);
	delay(200);

	// Read Green value
	greenPW = getGreenPW();
	// Map to 0-255
	greenValue = map(greenPW, greenMin,greenMax,255,0);
	delay(200);

	// Read Blue value
	bluePW = getBluePW();
	// Map to 0-255
	blueValue = map(bluePW, blueMin,blueMax,255,0);
	delay(200);

	Serial.print("Red = ");
	Serial.print(redValue);
	Serial.print(" - Green = ");
	Serial.print(greenValue);
	Serial.print(" - Blue = ");
	Serial.println(blueValue);

  if(redValue > greenValue && redValue > blueValue){
    Serial.println("COLOR DETECTED: RED");
  }else if(greenValue > redValue && greenValue > blueValue){
    Serial.println("COLOR DETECTED: GREEN");
  }else if(blueValue > redValue && blueValue > greenValue){
    Serial.println("COLOR DETECTED: BLUE");
  }
}

int getRedPW() {
	// Set sensor to read Red only
	digitalWrite(S2,LOW);
	digitalWrite(S3,LOW);
	int PW = pulseIn(PINOUT, LOW);

	return PW;
}

int getGreenPW() {
	// Set sensor to read Green only
	digitalWrite(S2,HIGH);
	digitalWrite(S3,HIGH);
	int PW = pulseIn(PINOUT, LOW);

	return PW;
}

int getBluePW() {
	// Set sensor to read Blue only
	digitalWrite(S2,LOW);
	digitalWrite(S3,HIGH);
	int PW = pulseIn(PINOUT, LOW);

	return PW;
}
