#include <Servo.h>

Servo myservo;
int motor1pin1 = 2;
int motor1pin2 = 3;
int buttonPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  myservo.attach(10);
  myservo.write(110);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(A0, LOW);
    delay(5000);
    analogWrite(9, 254);
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);
    delay(10000);
    Serial.print("Entering servo...\n");
    myservo.write(12);
    delay(1000);
    myservo.write(17);
    delay(1000);
    myservo.write(23);
    delay(1000);
    myservo.write(28);
    delay(1000);
    myservo.write(33);
    delay(1000);
    myservo.write(37);
    delay(1000);
    Serial.print("Exiting servo...\n");
    delay(2000);
    myservo.write(110);
    delay(1000 * 60 * 2);
  }
}
