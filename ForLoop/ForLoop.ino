int redPin=9;
int yellowPin=6;
int delayT=500;
int redBlink=5;
int yellowBlink=3;
int j=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (j=1;j<=yellowBlink;j=j+1) {
  digitalWrite(yellowPin,HIGH);
  delay(delayT);
  digitalWrite(yellowPin,LOW);
  delay(delayT);
  }
  for (j=1;j<=redBlink;j=j+1) {
  digitalWrite(redPin,HIGH);
  delay(delayT);
  digitalWrite(redPin,LOW);
  delay(delayT);
  }
}