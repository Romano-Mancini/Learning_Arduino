int pinRed = 6, pinGreen = 5, pinBlue = 3, redVal, greenVal, blueVal;
String reading;

void setup() {
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
  Serial.begin(9600);
  Serial.println("Insert color, format: \"(red, green, blue)\"):");
}

void loop() {
  if ((reading = Serial.readString()) != '\0') {
    sscanf(reading.c_str(), "(%d, %d, %d)", &redVal, &greenVal, &blueVal);
    if (0 <= redVal <= 255 && 0 <= greenVal <= 255 && 0 <= blueVal <= 255) {
      analogWrite(pinRed, redVal);
      analogWrite(pinGreen, greenVal);
      analogWrite(pinBlue, blueVal);
      Serial.print(reading);
    }
  }
}