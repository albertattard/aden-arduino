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
  red(HIGH);
  blue(LOW);
  green(LOW);

  delay(waitTime);

  red(LOW);
  green(HIGH);
  blue(LOW);

  delay(waitTime);
  red(LOW);
  green(LOW);
  blue(HIGH);

  delay(waitTime);

  blue(LOW);
  green(HIGH);
  red(LOW);

  delay(waitTime);

  blue(LOW);
  green(LOW);
  red(HIGH);
}

void red(int state) {
  digitalWrite(redLed, state);
}

void blue(int state) {
  digitalWrite(blueLed, state);
}
void green(int state) {
  digitalWrite(greenLed, state);
}
