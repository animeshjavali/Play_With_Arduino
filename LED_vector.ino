
void setup() {
pinMode(9,INPUT_PULLUP);//Push button is connected using a pull-up resistor. 
pinMode(10,OUTPUT);//For LED.

}

void loop() {
 if(digitalRead(9)==LOW)// If push button is pressed, blink the LED.
  {
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);
    
   }
 
}
