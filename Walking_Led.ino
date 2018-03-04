int msg[4]={12,10,8,4};
int x;
void setup() {
pinMode(12,OUTPUT);
pinMode(10,OUTPUT);
pinMode(8,OUTPUT);
pinMode(4,OUTPUT);

}

void loop() {
  for(x=0;x<=3;x++)
  {
    digitalWrite(msg[x],HIGH);
    delay(10);
    digitalWrite(msg[x],LOW);
    delay(10);
    }
    for(x=x-1;x>=0;x--)
    {
      
digitalWrite(msg[x],HIGH);
    delay(10);
    digitalWrite(msg[x],LOW);
    delay(10);
      
      
      }
}
