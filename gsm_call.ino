#include <SoftwareSerial.h>
SoftwareSerial mySerial(5,6);//RX,TX



void setup() {
Serial.begin(9600);
mySerial.begin(9600);// Start GSM serial communication.
delay(2000);
}


void loop() {
  mySerial.println("ATD9482199632;");// Generate a call using AT command.
  Serial.write("ATD9482199632;");//Print it on the serial monitor.
  while(1);
  

  
 
}
