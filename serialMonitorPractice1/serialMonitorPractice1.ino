int myNumber;
String msg="How Many Blinks do you want:";
int redPin=12;
int delayT=250;
int j;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0) {

}
myNumber=Serial.parseInt();
for (j=1;j<=myNumber;j=j+1) {
  digitalWrite(redPin,HIGH);
  delay(delayT);
  digitalWrite(redPin,LOW);
  delay(delayT);
}
}
