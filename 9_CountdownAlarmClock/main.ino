#include "digits.h"
#include "ringtone.h"

#define DP 2
#define A 8
#define B 9
#define C 3
#define D 4
#define E 5
#define F 7
#define G 6
#define ringtone 10

void setup() {
  pinMode(DP, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(ringtone, OUTPUT);
  
  digit_9(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_8(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_7(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_6(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_5(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_4(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_3(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_2(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_1(A,B,C,D,E,F,G,DP);
  delay(1000);
  digit_0(A,B,C,D,E,F,G,DP);

  furElise(ringtone);
}

void loop() {
  
}