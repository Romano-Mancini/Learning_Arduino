void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

int reading;

void loop() {
  digitalWrite(3, LOW);
  reading = digitalRead(2);
  while(reading == HIGH) {
    digitalWrite(3, HIGH);
    reading = digitalRead(2);
  }
  digitalWrite(3, LOW);
}
