#include <Arduino.h>

#define C4 262
#define Cd4 277
#define D4 293
#define Dd4 311
#define E4 329
#define F4 349
#define Fd4 369
#define G4 392
#define Gd4 415
#define A_4 440
#define Ad4 466
#define B4 493

#define A_5 440
#define Ad5 466
#define B5 493
#define C5 523
#define Cd5 554
#define D5 587
#define Dd5 622
#define E5 659
#define F5 698
#define Fd5 739
#define G5 783
#define Gd5 830

void playNote(int pin, int note, int duration);
void playFirstMelody(int pin, int duration);
void furElise(int pin);