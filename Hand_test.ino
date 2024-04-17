#include <Servo.h>

Servo myservo;  // Create a Servo object

int motor1pin1 = 2;
int motor1pin2 = 3;

void setup() {
  Serial.begin(9600);  // Open the serial port at 9600 bps:

  // Initialize the project pins as outputs
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A0, OUTPUT);

  // Attach the servo on pin 10 and set an initial position
  myservo.attach(10);
  myservo.write(10);
}

void loop() {
  // Turn the relay on (set the A0 pin high)
  digitalWrite(A0, LOW);
    delay(5000);  // Wait for a while
  // DC motor control
  analogWrite(9, 254);  // Set ENA pin to high for full speed

  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  delay(10000);  // Wait for a while

  // Sweep the servo from 90 to 5 degrees
  Serial.print("Entering servo...\n");
  // for (int pos = 90; pos >= 5; pos -= 5) {
  //   myservo.write(pos);
  //   Serial.print("moving...\n");
  //   delay(3000);  // Delay to clearly see the movement
  // }
  myservo.write(12);
  delay(1000); //4000
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

  delay(2000);  // Wait between cycles

  myservo.write(110);  // Set the servo to a specific position

  // Turn the relay off (set the A0 pin low)
  delay(1000 * 60 * 2);  // Wait for 2 minutes
}
