/*
	Infrarred Temperature (GY-096)

	It reads the temperature from ambient and from object and prints them.
*/

#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup(){
  Serial.begin(9600);
  mlx.begin();
}

void loop(){
  Serial.print("Ambient = ");
  Serial.print(mlx.readAmbientTempC()); 
  Serial.print("ºC\tObject = "); 
  Serial.print(mlx.readObjectTempC()); 
  Serial.println("ºC");
  delay(500);
}
