void LEDpulse(int pin);

int red = 11, yellow = 10, green = 9, blue = 6, white = 5;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);
}

void loop() {
  LEDpulse(red);
  LEDpulse(yellow);
  LEDpulse(green);
  LEDpulse(blue);
  LEDpulse(white);
}

void LEDpulse(int pin) {
  for (int i = 0; i <= 255; i++) {
    analogWrite(pin, i);
    delay(5);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(pin, i);
    delay(5);
  }
}