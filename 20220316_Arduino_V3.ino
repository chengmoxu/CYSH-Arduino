void setup()
{
Serial.begin(9600);
pinMode(6,OUTPUT);//馬達
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
/*
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
*/
}

void loop() {
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
delay(200);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
delay(500);
/*
analogWrite(10,200);
analogWrite(11,200);
Serial.print("GO" );
*/
}
