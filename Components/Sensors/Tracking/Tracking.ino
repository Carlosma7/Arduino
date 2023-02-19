/*
	Tracking

	It just controls if both IR devices are on the same place (black or white).
*/

void setup(){
	pinMode(8, INPUT);
	Serial.begin(9600);
}
 
void loop() {
	Serial.println(digitalRead(8));
	delay(500);
}
