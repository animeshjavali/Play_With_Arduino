void setup() {
  Serial.begin(9600);

}


void loop() {
Serial.print(F("{\"uid\": \"EC1234\",\"type\": \"humidty\",\"value\":"));// JSON into flash memeory.

Serial.print( get_rand(100));// call the user defined function.
Serial.println("}");
delay(1000);



}
int get_rand(int val)
{
  int seed=analogRead(A0);
  return ((seed%22)*999)%val;// Generate a random number.
  }
