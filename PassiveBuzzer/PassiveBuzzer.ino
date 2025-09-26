int buzzPin=8;
int buzzTime;
int potPin=A3;
int potVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  buzzTime=((9940./1023.) * potVal) + 60.;
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(buzzTime);
}
