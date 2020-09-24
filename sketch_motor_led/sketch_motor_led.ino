//フォトリフレクタ，モータの動作確認
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val_l = analogRead(A0);
  int val_R = analogRead(A1);

  if(val_R < 1000){
    digitalWrite(8,HIGH);
    delay(2000);
  }
  else{
    digitalWrite(8,LOW);
    delay(2000);
  }
  

}
