int readval;
void setup() {
 Serial.begin(9600);// Start serial communication.
 pinMode(8,OUTPUT);// Define pin Modes.
 pinMode(7,INPUT);

}

void loop() {
  digitalWrite(7,LOW);
  readval=digitalRead(7);// Set readval to 1 if there's an intruder. Otherwise 0.
  Serial.println(readval);
  delay(500);
  if(readval!=0)
  {
  digitalWrite(8,HIGH);// Drive an indicator LED or Buzzer.
  }
  else
    digitalWrite(8,LOW);
}
