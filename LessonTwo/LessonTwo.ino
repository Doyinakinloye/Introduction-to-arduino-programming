int redLED=7;
int greenLED=8;
int yellowLED=13; 
int dit=100;
int dah=500;
int longW=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(yellowLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(greenLED,HIGH);
delay(dah);
digitalWrite(greenLED,LOW);
delay(dah);

digitalWrite(greenLED,HIGH);
delay(dah);
digitalWrite(greenLED,LOW);
delay(dah);

digitalWrite(greenLED,HIGH);
delay(dah);
digitalWrite(greenLED,LOW);
delay(dah);

digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

delay(longW);
}
