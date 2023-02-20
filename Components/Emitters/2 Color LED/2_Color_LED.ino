/*
	2 Color LED (KY-011 and KY-029)

	It just alternates between red and green colors in LED.
*/

#define RED 8
#define GREEN 9

void setup(){
	pinMode(RED, OUTPUT);
	pinMode(GREEN, OUTPUT);

	digitalWrite(RED, LOW);
	digitalWrite(GREEN, LOW);
}


void loop(){
	digitalWrite(RED, HIGH);
	delay(1000);
	digitalWrite(RED, LOW);

	digitalWrite(GREEN, HIGH);
	delay(1000);
	digitalWrite(GREEN, LOW);
}
