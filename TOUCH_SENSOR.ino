
int readvalue,writevalue;
float readvolt,writevolt;
void setup() {
pinMode(9,OUTPUT);//Set the pin 9 as output.
Serial.begin(9600);//Start the Serial communication.
}

void loop() {
pinMode(A0,OUTPUT);
analogWrite(A0,0);//eliminate the garbage value on the pins.
pinMode(A0,INPUT);
readvalue=analogRead(A0);//read the value from A0.
readvolt=(5./1023.)*readvalue;
writevalue=(255./(1023.*10.))*readvalue;//converting readvalue to writevalue.
writevolt=(5./1023.)*writevalue;
digitalWrite(9,writevalue);//write the value to pin 9.
delay(10);//pause the program for 10ms.


}
