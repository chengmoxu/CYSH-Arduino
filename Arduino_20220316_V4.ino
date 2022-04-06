void setup()
{
Serial.begin(9600);
pinMode(6,OUTPUT);//馬達
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  int a=3,b=4,c=5,d=6,e,f;
  for(int i=0;i<100;i+=0)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    delay(300);
    e=a;
    a=b;
    b=e;
    f=c;
    c=d;
    d=f;
  }
/*digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
delay(500);*/

analogWrite(10,200);
analogWrite(11,200);
Serial.print("GO");
}
