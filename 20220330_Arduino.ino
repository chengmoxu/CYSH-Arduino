void setup() {
  Serial.begin(9600);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
}
void loop(){
if (analogRead(A0)>550){//前
    digitalWrite(3,HIGH);//IN_1
    digitalWrite(4,LOW);//IN_2
    digitalWrite(5,HIGH);//IN_3
    digitalWrite(6,LOW);//IN_4
}
else if(analogRead(A0)<450){//後
    digitalWrite(3,LOW);//IN_1
    digitalWrite(4,HIGH);//IN_2
    digitalWrite(5,LOW);//IN_3
    digitalWrite(6,HIGH);//IN_4
}
  else{//中間
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
}
/*
Serial.print(digitalRead(11));
Serial.print(" ");
Serial.print(analogRead(A1));
Serial.print(" ");
Serial.println(analogRead(A2));
*/
}
