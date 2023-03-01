/*
  SD Card - Read

  Opens a file with name "filename.txt" and reads the content.
*/

#include <SD.h>

File myFile;

void setup(){
  Serial.begin(9600);
  Serial.print("Starting SD ...");
  if(!SD.begin(4)){
    Serial.println("Error: Not initialized");
    return;
  }

  // Open file
  myFile = SD.open("filename.txt");
  if(myFile){
    Serial.println("filename.txt:");
    while(myFile.available()){
    	Serial.write(myFile.read());
    }
    myFile.close();
  }else{
    Serial.println("Error: File not found or couldn't be opened");
  }
}

void loop(){
  
}
