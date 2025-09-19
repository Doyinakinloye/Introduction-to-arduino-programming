int redPin=9;
int myPin=A3;
int ledVal;
int potVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(myPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(myPin);
ledVal=(255./1023.)*potVal;
analogWrite(redPin, ledVal);
Serial.println(ledVal);
}
