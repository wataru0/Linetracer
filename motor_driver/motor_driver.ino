#define IN1 8
#define IN2 7
#define Vref 9

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(Vref,127);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  delay(5000);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  delay(2000);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  delay(5000);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  delay(2000);

  analogWrite(Vref,255);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  delay(5000);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  delay(5000);
  

}
