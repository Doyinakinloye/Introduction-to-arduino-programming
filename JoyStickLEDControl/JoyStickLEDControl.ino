int xPin=A0;
int yPin=A1;
int sPin=2;
int redPin=13;
int yellowPin=12;
int greenPin=9;
int bluePin=8;
int xVal;
int yVal;
int sVal;
int delayTime=200;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(sPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  digitalWrite(sPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal=analogRead(xPin);
  yVal=analogRead(yPin);
  sVal=digitalRead(sPin);
  delay(delayTime);
  Serial.print("X value = ");
  Serial.print(xVal);
  Serial.print(", Y value = ");
  Serial.print(yVal);
  Serial.print(", Switch State is ");
  Serial.println(sVal);
  if (xVal<500) {
    digitalWrite(redPin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
  }
  else if (xVal>540) {
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin,HIGH);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
  }
  else if (yVal<500) {
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(bluePin,HIGH);
    digitalWrite(greenPin,LOW);
  }
  else if (yVal>540) {
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,HIGH);
  }
  delay(delayTime);
}