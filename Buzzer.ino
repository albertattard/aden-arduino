const int buzzer = 12;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  highTone(1000);
  lowTone(250);

  noTone(buzzer);
  delay(10);
}

void highTone(int period) {
  tone(buzzer, 600);
  delay(period);
}

void lowTone(int period) {
  tone(buzzer, 500);
  delay(period);
}
 
 
