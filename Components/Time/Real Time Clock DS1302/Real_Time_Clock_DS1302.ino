/*
  Real Time Clock DS1302

  It sets the time and prints it on the serial monitor second by second.
*/

#include <virtuabotixRTC.h>

virtuabotixRTC myRTC(6, 7, 8);

void setup(){
  Serial.begin(9600);

  // To configure the time, first time set the time
  // WARNING: Comment this once is set, to avoid losing actual time
  myRTC.setDS1302Time(0, 34, 15, 7, 26, 2, 2023);
}

void loop(){
  // Get time from module updated
  myRTC.updateTime();
  Serial.print("Date / Hour: ");
  Serial.print(myRTC.dayofmonth);
  Serial.print("/");
  Serial.print(myRTC.month);
  Serial.print("/");
  Serial.print(myRTC.year);
  Serial.print(" ");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.println(myRTC.seconds);
  delay(1000);
}
