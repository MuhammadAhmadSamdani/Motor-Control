int MotorPin1 = 22;
int MotorPin2 = 23;
// FOR Speed
int MotorPower = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(MotorPin1,OUTPUT);
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPower, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int SPEED = 190;
  
  digitalWrite(MotorPin1,HIGH);
  digitalWrite(MotorPin2,LOW);
  analogWrite(MotorPower,SPEED);
  delay(200);
  
}
 
 