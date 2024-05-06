#include <Servo.h>
#include <SevSeg.h>

#define pot_out A5
#define motor_driver 9
#define D1  1
#define D2  13
#define D3  11
#define D4  12
#define A   2
#define B   4
#define C   8
#define D   6
#define E   5
#define F   3
#define G   10
#define DEC 7

int reading, degrees, i;
Servo servoMotor;
SevSeg sevseg;

void setup() {
  pinMode(pot_out, INPUT);
  servoMotor.attach(motor_driver);
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
  sevseg.blank();
  reading = analogRead(pot_out);
  degrees = map(reading, 0, 1023, 0, 180);
  servoMotor.write(degrees);
  sevseg.setNumber(degrees);
  sevseg.setBrightness(90);
  for (i = 0; i < 4; i++) {
      sevseg.refreshDisplay();
      delay(5);
  }
}
