void setup() {
  Serial.begin(9600); 
  pinMode(3,OUTPUT);//IN_1
  pinMode(4,OUTPUT);//IN_2
  pinMode(5,OUTPUT);//IN_3
  pinMode(6,OUTPUT);//IN_4
  pinMode(A0,INPUT);//X
  pinMode(A1,INPUT);//Y
}
void loop() {
  if(analogRead(A0)>550){//X軸>550(向前)
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  else if(analogRead(A0)<430){//X軸<430(向後)
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
  else{//550>X軸>430(中間)
    if(analogRead(A1)>550){//Y軸>550(向前)
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  else if(analogRead(A1)<430){//Y軸<430(向後)
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
  else{//550>Y軸>430(中間)
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  }
  
}
