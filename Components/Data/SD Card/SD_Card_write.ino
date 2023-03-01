/*
  SD Card - Write

  Opens a file with name "filename.txt" and writes two lines on it.
*/

#include <SD.h>

File myFile;
void setup(){
  Serial.begin(9600);
  Serial.print("Starting SD...");
  if(!SD.begin(4)){
    Serial.println("Error: Not initialized");
    return;
  }

  // Open/Create file
  myFile = SD.open("filename.txt", FILE_WRITE);
  if(myFile){ 
        myFile.println("User: Carlosma7");
        myFile.println("Example: SD Card Module");
        myFile.close(); 
        Serial.println("Success");
  }else{
    Serial.println("Error: File not found or couldn't be opened");
  }
}

void loop(){

}
