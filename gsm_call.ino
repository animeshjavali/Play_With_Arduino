#include <SoftwareSerial.h>
SoftwareSerial mySerial(5,6);//RX,TX



void setup() {
Serial.begin(9600);
mySerial.begin(9600);
delay(2000);
}


void loop() {
  mySerial.println("ATD9482199632;");
  Serial.write("ATD9482199632;");
  while(1);
  

  
 
}
