#define IN1_r 8
#define IN2_r 7
#define Vref_r 9

#define Vref_l 5
#define IN1_l 4
#define IN2_l 2



void setup() {
  // put your setup code here, to run once:
  pinMode(IN1_r,OUTPUT);
  pinMode(IN2_r,OUTPUT);
  pinMode(IN1_l,OUTPUT);
  pinMode(IN2_l,OUTPUT);

  Serial.begin(9600);
  //pinMode();

}

void loop() {
  // put your main code here, to run repeatedly:

  //1:HIGH,2:LOW=前進

  int light_r = analogRead(A0);
  int light_l = analogRead(A1);

  //motor speed set
  analogWrite(Vref_r,150);
  analogWrite(Vref_l,150);

  if(light_r > 1000 &&light_l > 1000){
    digitalWrite(IN1_r,HIGH);
    digitalWrite(IN2_r,LOW);
    digitalWrite(IN1_l,HIGH);
    digitalWrite(IN2_l,LOW);
  }

  else if(light_r < 1000 &&light_l > 1000){
    digitalWrite(IN1_r,HIGH);
    digitalWrite(IN2_r,LOW);
    digitalWrite(IN1_l,LOW);
    digitalWrite(IN2_l,LOW);
  }

  else if(light_r > 1000 &&light_l < 1000){
    digitalWrite(IN1_r,LOW);
    digitalWrite(IN2_r,LOW);
    digitalWrite(IN1_l,HIGH);
    digitalWrite(IN2_l,LOW);
  }
  
/*
  //brake
  digitalWrite(IN1_r,HIGH);
  digitalWrite(IN2_r,HIGH);
  delay(2000);

  digitalWrite(IN1_l,LOW);
  digitalWrite(IN2_l,HIGH);
  delay(3000);

  //brake
  digitalWrite(IN1_l,HIGH);
  digitalWrite(IN2_l,HIGH);
  delay(2000);

  //straight
  digitalWrite(IN1_r,LOW);
  digitalWrite(IN2_r,HIGH);
  digitalWrite(IN1_l,LOW);
  digitalWrite(IN2_l,HIGH);
  delay(5000);
  
  //motor stop
  digitalWrite(IN1_r,LOW);
  digitalWrite(IN2_r,LOW);
  digitalWrite(IN1_l,LOW);
  digitalWrite(IN2_l,LOW);
  delay(5000);
  */

}
