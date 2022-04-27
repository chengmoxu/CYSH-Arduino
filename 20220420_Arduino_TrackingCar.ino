void setup() {//腳位設定
  Serial.begin(9600);//設定鮑率為9600
  pinMode(2,OUTPUT);//IN_1，數位腳位2，左馬達輸出
  pinMode(3,OUTPUT);//IN_2，數位腳位3，左馬達輸出
  pinMode(4,OUTPUT);//IN_3，數位腳位4，右馬達輸出
  pinMode(5,OUTPUT);//IN_4，數位腳位5，右馬達輸出
  pinMode(7,INPUT);//數位腳位7，紅外線L輸入
  pinMode(8,INPUT);//數位腳位8，紅外線R輸入
  pinMode(11,OUTPUT);//數位腳位11，EN_A輸出
  pinMode(12,OUTPUT);//數位腳位12，EN_B輸出
}

void loop() {//主程式
  analogWrite(11,100);//數位腳位11，EN_A輸出，0~255
  analogWrite(12,100);//數位腳位12，EN_B輸出，0~255

  //左右向判斷迴圈
  if(digitalRead(7)==1&&digitalRead(8)==1)
  {
  //兩邊都感測到白線
  //車子向前
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    Serial.print("go ");
  }
  else if(digitalRead(7)==1&&digitalRead(8)==0)
  {
  //左白右黑
  //車子向右
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    Serial.print("right ");
    }
  else if(digitalRead(7)==0&&digitalRead(8)==1)
  {
  //左黑右白
  //車子向左
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    Serial.print("left ");
    }
  else
  {
  //車子停止
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    Serial.print("stop ");
    }
Serial.print(digitalRead(7));
Serial.print(" ");
Serial.println(digitalRead(8));
}
