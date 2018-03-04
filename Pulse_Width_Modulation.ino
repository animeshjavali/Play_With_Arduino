int writevalue,readvalue;
float readvoltage,writevoltage;


void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readvalue=analogRead(A0);
  readvoltage=(5./1023.)*readvalue;
  writevalue=(255./1023.)*readvalue;
  writevoltage=(5.*20/255.)*writevalue;
  delay(1000);
  Serial.println(writevoltage);
}
