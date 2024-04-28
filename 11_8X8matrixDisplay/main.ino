#include <LedControl.h>
#include "symbols.h"

// pin definition
#define DIN 4
#define CS 3
#define CLK 2
#define MOD 1                               // number of modules connected
#define DUR 500

void setSymbol(byte *a, int module);

LedControl lc = LedControl(DIN, CLK, CS, MOD);
short int len, i;
String s;

void setup() {
  lc.shutdown(0, false);                    // turns it on
  lc.setIntensity(0, 6);                    // sets the intensity, 0-15 (0 does not turn off LEDs, lc.shutdown() does.)
  lc.clearDisplay(0);                       // clears the display
  pinMode(DIN, OUTPUT);                     // pin setup
  pinMode(CS, OUTPUT);
  pinMode(CLK, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Insert sentence: ");
  while (Serial.available() == 0);          // wait until a string is provided
  s = Serial.readString();
  len = s.length() - 1;
  for (i = 0; i < len; i++)
      if (s[i] - 32 <= 94)
        setSymbol(asciiSymbols[s[i] - 32], 0, DUR);
}

// used to light up symbols in the display
void setSymbol(byte *a, int module, int duration) {
  for (short int row = 0; row < 8; row++)
    lc.setRow(module, row, a[row]);
  delay(duration);
}

