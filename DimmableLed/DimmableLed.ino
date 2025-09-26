int buttPin1=8;
int buttPin2=12;
int buzzPin=4;
int redPin=10;
int brightVal=0;
int delayTime=200;
int buttVal1;
int buttVal2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttPin1,INPUT);
  pinMode(buttPin2,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttVal1=digitalRead(buttPin1);
  if (buttVal1==0) {
    if (brightVal>0) {
      brightVal -= 25;
      analogWrite(redPin,brightVal);
      delay(delayTime);
    }
    else if (brightVal==0) {
      digitalWrite(buzzPin,HIGH);
      delay(delayTime);
      digitalWrite(buzzPin,LOW);
    }
  }
  Serial.println(buttVal1);
  buttVal2=digitalRead(buttPin2);
  delay(delayTime);
  if (buttVal2==0) {
    if (brightVal<250 && brightVal>=0) {
      brightVal += 25;
      analogWrite(redPin,brightVal);
      delay(delayTime);
    }
    else if (brightVal>250) {
      digitalWrite(buzzPin,HIGH);
      delay(delayTime);
      digitalWrite(buzzPin,LOW);
    }
  }
  Serial.println(buttVal2);
  delay(delayTime);
}