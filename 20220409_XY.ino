void setup() {
  //控制端(搖桿)
  pinMode(__,INPUT);//搖桿X(左右)
  pinMode(__,INPUT);//搖桿Y(前後)
  
  //被控制端(L298N-馬達)
  pinMode(7,OUTPUT);//馬達IN_1腳位
  pinMode(6,OUTPUT);//馬達IN_2腳位
  pinMode(5,OUTPUT);//馬達IN_3腳位
  pinMode(4,OUTPUT);//馬達IN_4腳位
  
  //序列埠監控視窗
  Serial.begin(9600); 
}
void loop() {
  Serial.print("  ");
  Serial.print(analogRead(A1));
  Serial.print("  ");
  Serial.println(analogRead(A2));


if (條件) {動作A}
else {動作B}


if (值<490) {

動作A  }

else if (值>510) {

動作B }
else{

動作C }
  }
