
int led1=8;
int led2=9;

void setup()
{
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT); 
 Serial.begin(9600);
}

void loop() 
{
 int ledblinkno=2;// To hold the number of times LEDs should blink.
int x;// Temporary variable to run a for loop.
Serial.println("The number of times yellow blinks is");
 for(x=1;x<=ledblinkno;x++)
 {
  
  Serial.println(x);
  digitalWrite(led1,HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  delay(500);
 }
 Serial.println("The number of times green blinks is");
 for(x=1;x<=ledblinkno;x++)
 {
 Serial.println(x);
  digitalWrite(led2,HIGH);
  delay(550);
  digitalWrite(led2,LOW);
  delay(550);
  
  }

}
