#include "ringtone.h"


void playNote(int pin, int note, int duration) {
  tone(pin, note, duration);
  delay(duration);
}

void playFirstMelody(int pin, int duration) {
  playNote(pin, E5, duration);
  playNote(pin, Dd5, duration);
  playNote(pin, E5, duration);
  playNote(pin, Dd5, duration);
  playNote(pin, E5, duration);
  playNote(pin, B5, duration);
  playNote(pin, D5, duration);
  playNote(pin, C5, duration);
  playNote(pin, A_5, duration*3); 
  playNote(pin, C4, duration);
  playNote(pin, E4, duration);
  playNote(pin, A_5, duration);
  playNote(pin, B5, duration*3);
}

void furElise(int pin) {
  playFirstMelody(pin, 300);
  playNote(pin, E4, 300);
  playNote(pin, A_4, 300);
  playNote(pin, B4, 300);
  playNote(pin, C5, 900);
  playFirstMelody(pin, 300);
  playNote(pin, E4, 300);
  playNote(pin, C5, 300);
  playNote(pin, B4, 300);
  playNote(pin, A_4, 900);
}
