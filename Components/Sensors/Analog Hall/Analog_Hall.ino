/*
	Analog Hall

	It just detects the magnetic field and prints on serial monitor, detecting if a magnetic field is here and turning
	on/off the builtin LED.
*/

int hall = A0 ;
int value;

void setup(){
  Serial.begin(9600);
  pinMode(hall, INPUT);
  pinMode (LED_BUILTIN, OUTPUT);
}

void loop(){
	value = analogRead(hall);
	Serial.println(valor);
	delay(500);

	if(value >= 518 && 528 >= value){ // In range [518-528] no magnet is detected
		Serial.println("No magnet");
		digitalWrite(LED_BUILTIN, LOW);
	}else{
		Serial.println("Magnet");
		digitalWrite(LED_BUILTIN, HIGH);
	}
}
