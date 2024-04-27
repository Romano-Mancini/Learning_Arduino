#include <SevSeg.h>

// Define pin numbers for 7-segment display
#define D1  5
#define D2  4
#define D3  3
#define D4  2
#define A   6
#define B   8
#define C   11
#define D   13
#define E   9
#define F   7
#define G   10
#define DEC 12

SevSeg sevseg;
short int n1, n2, res, i;
char op;

void clearSerialBuffer();

void setup() {
  // As per the SevSeg documentation
  byte numDigits = 4; 
  byte digitPins[] = {D1, D2, D3, D4};
  byte segmentPins[] = {A, B, C, D, E, F, G, DEC};
  bool resistorsOnSegments = true;
  byte hardwareConfig = COMMON_CATHODE;
  bool updateWithDelays = false;
  bool leadingZeros = false;
  bool disableDecPoint = false;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
               updateWithDelays, leadingZeros, disableDecPoint);
  Serial.begin(9600);
}

void loop() {

  // blanks the display and clears the serial
  sevseg.blank();
  clearSerialBuffer();

  // read first number from serial
  Serial.println("Insert first number: ");
  while (Serial.available() == 0);
  n1 = Serial.parseInt();
  Serial.println(n1);
  clearSerialBuffer();

  // read second number from serial
  Serial.println("Insert second number: ");
  while (Serial.available() == 0);
  n2 = Serial.parseInt();
  Serial.println(n2);
  clearSerialBuffer();

  // read operation from serial
  Serial.println("Insert operation: (+,-,*,/,%): ");
  while (Serial.available() == 0);
  op = Serial.read();
  Serial.println(op);
  clearSerialBuffer();

  // compute the correct calculation
  switch(op) {
    case '+':
      res = n1+n2;
      break;
    case '-':
      res = n1-n2;
      break;
    case '*':
      res = n1*n2;
      break;
    case '/':
      if (n2 != 0)
        res = n1/n2;
      else
        res = -1;
      break;
    case '%':
      if (n2 != 0)
        res = n1/n2;
      else
        res = -1;
      res = n1%n2;
      break;
    default:
      Serial.println("Invalid operation input.");
}

  // check if the result is representable on four digits, if so displays it:
  if (res < 0 || res > 9999) {
    Serial.println("The result is not representable on four digits.");
  }
  else {
    sevseg.setNumber(res);
    sevseg.setBrightness(90);
    for (i = 0; i < 600; i++) {
      sevseg.refreshDisplay();
      delay(5);
    }
  } 
}

// clears the buffer
void clearSerialBuffer() {
  while (Serial.available() > 0)
    Serial.read();
}