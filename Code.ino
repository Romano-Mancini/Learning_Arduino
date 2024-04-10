int message, voltage;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  message = analogRead(A0);
  voltage = (message * 5) / 1023;
  delay(500);
  Serial.print(voltage);
  Serial.print("V -> ");
  Serial.println(message);
}