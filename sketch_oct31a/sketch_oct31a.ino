//フォトリフレクタ動作確認用
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val_l = analogRead(A0);
  int val_R = analogRead(A1);
  Serial.print("L:");
  Serial.println(val_l);
  Serial.print("R:");
  Serial.println(val_R);
  Serial.println(" ");

  delay(1500);
}
