const int redLed = 12;
const int blueLed = 13;
const int greenLed = 11;

const int waitTime = 333;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  colour(redLed);
  colour(greenLed);
  colour(blueLed);
  colour(greenLed);
}

void colour(int pin) {
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);

  digitalWrite(pin, HIGH);

  delay(waitTime);
}
