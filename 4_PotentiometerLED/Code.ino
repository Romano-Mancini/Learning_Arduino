void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int read, value;

  read = analogRead(A0);
  value = (read/1023.0)*255;

  analogWrite(3, value);
  analogWrite(5, value);
}