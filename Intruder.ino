int readval;
void setup() {
 Serial.begin(9600);
 pinMode(8,OUTPUT);
 pinMode(7,INPUT);

}

void loop() {
  digitalWrite(7,LOW);
  readval=digitalRead(7);
  Serial.println(readval);
  delay(500);
  if(readval!=0)
  {
  digitalWrite(8,HIGH);
  }
  else
    digitalWrite(8,LOW);
}
