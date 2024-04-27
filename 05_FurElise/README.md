# Arduino Fur Elise Jingle with Passive Buzzer

This Arduino project plays the initial jingle of "Für Elise" using a passive buzzer.

## Functionality

The project plays the initial melody of "Für Elise" on a passive buzzer connected to pin 5 of the Arduino board. The melody is played by generating tones of specific frequencies for each note.

### Usage

1. Connect a passive buzzer to your Arduino board. Connect one buzzer terminal to pin 5.
2. Upload the provided Arduino sketch to your Arduino board.
3. The initial jingle of "Für Elise" will be played on the passive buzzer.

### Additional Notes

- Ensure that the frequencies defined in the sketch correspond to the correct notes in the melody.
- The melody can be customized by adjusting the duration and sequence of notes in the `playFirstMelody()` function.
- You can extend the melody or add additional sections by calling the `playNote()` function with the desired note and duration.
- Adjust the duration parameter in milliseconds to control the duration of each note.
