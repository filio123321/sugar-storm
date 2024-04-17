void setup() {
  // Initialize the project pins as an output
  pinMode(A0, OUTPUT);

}

void loop() {
  // Turn the relay on (zagrqvane)
  digitalWrite(A0, LOW);
  delay(1000*60*5); // Wait for a second

  // Enter the sugar into chamber
  digitalWrite(A0, HIGH);
  delay(10000); // Wait for another second
}
