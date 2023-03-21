/*
  Code extracted from:

  https://www.instructables.com/meArmJoystick-en/
*/

#include <Servo.h> 
const int SERVOS = 4;
int PIN[SERVOS], value[SERVOS], idle[SERVOS], currentAngle[SERVOS], MIN[SERVOS], MAX[SERVOS], INITANGLE[SERVOS];
Servo myservo[SERVOS];
int afrom[] = {90, 35, 135}, ato[] = {20, 140, 110}, amiddle[] = {20, 35, 135}, afinal[] = {179,75,95}, aafterfinal[] = {179,35,135};
int DELAYTIME = 200;

void setup() {
  Serial.begin(57600);
  pinMode(3, OUTPUT);  
  digitalWrite(3, HIGH);
  
  PIN[0] = 11;
  MIN[0] = 0;
  MAX[0] = 179;
  INITANGLE[0] = 90;
  PIN[1] = 10;
  MIN[1] = 35;
  MAX[1] = 179;
  INITANGLE[1] = 90;
  PIN[2] = 9;
  MIN[2] = 90;
  MAX[2] = 179;
  INITANGLE[2] = 155;
  PIN[3] = 5;
  MIN[3] = 0;
  MAX[3] = 179;
  INITANGLE[3] = 25;
  
  for (int i = 0; i < SERVOS; i++){
    myservo[i].attach(PIN[i]);
    myservo[i].write(INITANGLE[i]);
    value[i] = 0;
    idle[i] = 0;
  }
  /*
  delay(1000);
  for (int i = 0; i < 5; i++){
    closeclaw(false);
    armfromto(afrom, ato);
    closeclaw(true);
    delay(DELAYTIME); 
    armfromto(ato, amiddle);
    delay(DELAYTIME);   
    armfromto(amiddle, afinal);
    closeclaw(false);
    delay(DELAYTIME);
    armfromto(afinal, aafterfinal);
    delay(DELAYTIME);
    armfromto(aafterfinal, afrom);
    delay(DELAYTIME);
  }
  
  for (int i = 0; i < 0; i++){
    armfromto(afrom, ato);
    delay(DELAYTIME);
    armfromto(ato, afinal);
    delay(DELAYTIME);
    armfromto(afinal, afrom);
    delay(DELAYTIME); 
  }
  */
}

void loop() {
  
  for (int i = 0; i < SERVOS; i++){
    value[i] = analogRead(i);
    currentAngle[i] = myservo[i].read();
    
    if (value[i] > 612) {
      idle[i] = 0;
      
      if (currentAngle[i] > MIN[i]) --currentAngle[i];
      if (!myservo[i].attached()){
        myservo[i].attach(PIN[i]);
      }
      myservo[i].write(currentAngle[i]);     
    } else if (value[i] < 412) {
      idle[i] = 0;
      if (currentAngle[i] < MAX[i]) ++currentAngle[i];
      if (!myservo[i].attached()){
        myservo[i].attach(PIN[i]);
      }
      myservo[i].write(currentAngle[i]);    
    } else {
      ++idle[i];
    }
    if (idle[i] > 100){
      myservo[i].detach();
      idle[i] = 0;
    }  
  }  

  delay(30);
  
  Serial.print(currentAngle[0]);
  Serial.print(" ; ");
  Serial.print(currentAngle[1]);
  Serial.print(" ; ");
  Serial.print(currentAngle[2]);
  Serial.print(" ; ");
  Serial.println(currentAngle[3]);
  
}

void armfromto(int *arrf, int *arrt){
  int lp[3], seg = 3, sign;
  
  for (int i = 0; i < 3; i++){    
    lp[i] = abs((arrt[i] - arrf[i])/seg);
  }
  
  //delay(DALAYTIME);
  for (int i = 0; i < 3; i++){
    sign = arrt[i] - arrf[i] > 0 ? 1 : -1;
    for (int j = 0; j < lp[i]; j++){
      myservo[i].write(arrf[i]+j*seg*sign);
      delay(20);
    }
    delay(DELAYTIME);
  }
}

void closeclaw(boolean op){
  if (op){
    myservo[3].write(23);
  } else {
    myservo[3].write(45);
  }
}
