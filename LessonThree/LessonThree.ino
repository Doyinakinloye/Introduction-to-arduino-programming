int redLED=7;
int greenLED=8;
int yellowLED=13;
int lastLED=12;
int longW=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(yellowLED,OUTPUT);
pinMode(lastLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,LOW);
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,LOW);
digitalWrite(lastLED,LOW);
delay(longW);

digitalWrite(redLED,LOW);
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,LOW);
digitalWrite(lastLED,HIGH);
delay(longW);

digitalWrite(redLED,LOW);
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,HIGH);
digitalWrite(lastLED,LOW);
delay(longW);

digitalWrite(redLED,LOW);
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,HIGH);
digitalWrite(lastLED,HIGH);
delay(longW);

digitalWrite(redLED,LOW);
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,LOW);
digitalWrite(lastLED,LOW);
delay(longW);

digitalWrite(redLED,LOW);
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,LOW);
digitalWrite(lastLED,HIGH);
delay(longW);

digitalWrite(redLED,LOW);
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,HIGH);
digitalWrite(lastLED,LOW);
delay(longW);

digitalWrite(redLED,LOW);
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,HIGH);
digitalWrite(lastLED,HIGH);
delay(longW);

digitalWrite(redLED,HIGH);
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,LOW);
digitalWrite(lastLED,LOW);
delay(longW);

digitalWrite(redLED,HIGH);
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,LOW);
digitalWrite(lastLED,HIGH);
delay(longW);

digitalWrite(redLED,HIGH);
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,HIGH);
digitalWrite(lastLED,LOW);
delay(longW);

digitalWrite(redLED,HIGH);
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,HIGH);
digitalWrite(lastLED,HIGH);
delay(longW);

digitalWrite(redLED,HIGH);
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,LOW);
digitalWrite(lastLED,LOW);
delay(longW);

digitalWrite(redLED,HIGH);
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,LOW);
digitalWrite(lastLED,HIGH);
delay(longW);

digitalWrite(redLED,HIGH);
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,HIGH);
digitalWrite(lastLED,LOW);
delay(longW);

digitalWrite(redLED,HIGH);
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,HIGH);
digitalWrite(lastLED,HIGH);
delay(longW);
}