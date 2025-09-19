float V;
int voltPin=A3;
int readVal;
int delayT=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(voltPin);
  V=(5./1023.)*readVal;
  Serial.println(V);
  delay(delayT);
}
