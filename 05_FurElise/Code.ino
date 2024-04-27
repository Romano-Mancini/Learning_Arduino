#define C4 262
#define Cd4 277
#define D4 293
#define Dd4 311
#define E4 329
#define F4 349
#define Fd4 369
#define G4 392
#define Gd4 415
#define A4 440
#define Ad4 466
#define B4 493

#define A5 440
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
  playNote(pin, A5, duration*3); 
  playNote(pin, C4, duration);
  playNote(pin, E4, duration);
  playNote(pin, A5, duration);
  playNote(pin, B5, duration*3);
}

void setup() {
  pinMode(5, OUTPUT);
  playFirstMelody(5, 300);
  playNote(5, E4, 300);
  playNote(5, A4, 300);
  playNote(5, B4, 300);
  playNote(5, C5, 900);
  playFirstMelody(5, 300);
  playNote(5, E4, 300);
  playNote(5, C5, 300);
  playNote(5, B4, 300);
  playNote(5, A4, 900);
}

void loop() {

}
