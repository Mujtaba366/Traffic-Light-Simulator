int redLed = 9;
int yellowLed = 10;
int greenLed = 12;

void setup() {

  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  // Turn all LEDs OFF initially
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);
}

void loop() {

  // RED ON
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);

  delay(3000);

  // RED + YELLOW ON
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);

  delay(1000);

  // GREEN ON
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);

  delay(3000);

  // YELLOW ON
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);

  delay(1000);
}
