/*
	Calibration (TCS230)

	It just shows the RGB PW values detected, the idea is to point at black object for maximum
	values and white object for minimum values.
*/

#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define PINOUT 8

// Variables for Color Pulse Width Measurements
int redPW = 0;
int greenPW = 0;
int bluePW = 0;

void setup(){
	pinMode(S0, OUTPUT);
	pinMode(S1, OUTPUT);
	pinMode(S2, OUTPUT);
	pinMode(S3, OUTPUT);

	digitalWrite(S0,HIGH);
	digitalWrite(S1,LOW);

	pinMode(PINOUT, INPUT);

	Serial.begin(9600);
}

void loop() {
	// Read Red Pulse Width
	redPW = getRedPW();
	delay(200);

	// Read Green Pulse Width
	greenPW = getGreenPW();
	delay(200);

	// Read Blue Pulse Width
	bluePW = getBluePW();
	delay(200);

	Serial.print("Red PW = ");
	Serial.print(redPW);
	Serial.print(" - Green PW = ");
	Serial.print(greenPW);
	Serial.print(" - Blue PW = ");
	Serial.println(bluePW);
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
