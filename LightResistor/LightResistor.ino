int lightPin=A0;
int lightVal;
int buzzTime;
int buzzPin=9;
int delayTime=250;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  buzzTime=(9900./700.) * lightVal;
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(buzzTime);
}
