int redPin = 5, greenPin = 3, bluePin = 6;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int i;

  for (i = 0; i <= 255; i++) {
    analogWrite(redPin, i);
    delay(10);
  }

  for (i = 0; i <= 255; i++) {
    analogWrite(redPin, 255-i);
    analogWrite(greenPin, i);
    delay(10);
  }

  for (i = 0; i <= 255; i++) {
    analogWrite(greenPin, 255-i);
    analogWrite(bluePin, i);
    delay(10);
  }
  
  for (i; i > 0; i--)
    analogWrite(bluePin, i);
    delay(10);
}