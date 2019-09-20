void setup() {
  // put your setup code here, to run once:
for(int i=1;i<=5;i++)
pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(1,HIGH);      
digitalWrite(2,HIGH);
delay(250);                 
digitalWrite(1,LOW);
digitalWrite(2,LOW);
delay(250);

digitalWrite(2,HIGH);      
digitalWrite(3,HIGH);
delay(250);                 
digitalWrite(2,LOW);
digitalWrite(3,LOW);
delay(250);

digitalWrite(3,HIGH);      
digitalWrite(4,HIGH);
delay(250);                 
digitalWrite(3,LOW);
digitalWrite(4,LOW);
delay(250);

digitalWrite(4,HIGH);      
digitalWrite(5,HIGH);
delay(250);                 
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(250);

digitalWrite(5,HIGH);      
digitalWrite(1,HIGH);
delay(250);                 
digitalWrite(5,LOW);
digitalWrite(1,LOW);
delay(250);

}
