#define inputPin A0

void setup() {
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.write(analogRead(inputPin)/4);
  delay(100);
}
