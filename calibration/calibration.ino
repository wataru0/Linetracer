#define IN1_r 8
#define IN2_r 7
#define Vref_r 9

#define Vref_l 5
#define IN1_l 4
#define IN2_l 2

int i=0;
int rmax,rmin,lmax,lmin;

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

  rmax = rmin =analogRead(A0);
  lmax = lmin =analogRead(A1);
  
  

  //motor speed set
  analogWrite(Vref_r,255);
  analogWrite(Vref_l,255);

  digitalWrite(IN1_r,HIGH);
  digitalWrite(IN2_r,LOW);
  digitalWrite(IN1_l,HIGH);
  digitalWrite(IN2_l,LOW);

  for(i=0;i<80;i++){
    delay(20);
    int light_r = analogRead(A0);
    int light_l = analogRead(A1);
    if (light_r < rmin) rmin = light_r;
    if (light_r > rmax) rmax = light_r;
    if (light_l < lmin) lmin = light_l;
    if (light_l > lmax) lmax = light_l;
    
  }

  Serial.print("rmax:");
  Serial.println(rmax);
  Serial.print("rmin:");
  Serial.println(rmin);
  Serial.print("lmax:");
  Serial.println(lmax);
  Serial.print("lmin:");
  Serial.println(lmin);
  Serial.println("");

  digitalWrite(IN1_r,LOW);
  digitalWrite(IN2_r,LOW);
  digitalWrite(IN1_l,LOW);
  digitalWrite(IN2_l,LOW);

  delay(10000);

}
