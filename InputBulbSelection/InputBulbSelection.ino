String msg = "Which bulb do you want to light up? ";
int redPin = 12;
int yellowPin = 10;
int greenPin = 8;
String bulb;
int delayTime = 500;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  Serial.println(msg);
  while (Serial.available() == 0) {
    // Wait for input
  }

  bulb = Serial.readString();
  bulb.trim(); // Clean up input
  delay(100);  // Optional delay

  if (bulb.equals("red")) {
    Serial.println("Red bulb selected");
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  } else if (bulb.equals("yellow")) {
    Serial.println("Yellow bulb selected");
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
  } else if (bulb.equals("green")) {
    Serial.println("Green bulb selected");
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
  } else {
    Serial.println("Invalid bulb color. Try red, yellow, or green.");
  }
}
