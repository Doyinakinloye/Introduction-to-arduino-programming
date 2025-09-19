int potVal;
int delayTime=500;
int potPin=A0;
int redPin=8;
int maxVal=700;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(redPin,OUTPUT);
}

void loop() {
potVal=analogRead(potPin);
Serial.println(potVal);
delay(delayTime);

while (potVal>maxVal) {
  digitalWrite(redPin,HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(delayTime);
}
digitalWrite(redPin,LOW);
}
