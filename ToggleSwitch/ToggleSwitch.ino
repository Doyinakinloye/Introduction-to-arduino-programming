int ledState=0;
int redPin=8;
int buttPin=12;
int buttNew;
int buttOld=1;
int dT=100; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(buttPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttNew=digitalRead(buttPin);
  Serial.println(buttNew);
  if (buttOld==0 && buttNew==1) {
    if (ledState==0) {
      digitalWrite(redPin,HIGH);
      ledState=1;
    }
    else {
      digitalWrite(redPin, LOW);
      ledState=0;
    }
  }
  buttOld=buttNew;
  delay(dT);
}
