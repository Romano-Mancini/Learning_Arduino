# Elegoo Uno R3 Countdown Timer and Fur Elise Ringtone

This project features an Elegoo Uno R3 microcontroller connected to a one-digit 7-segment LED (5161 series). The setup displays a countdown from 9 to 0 on the LED, and upon reaching 0, it plays a snippet of Beethoven's "Fur Elise" on a passive buzzer. The ringtone is intended to serve as an alert or notification.

## Files Description

- **digits.cpp**: This file contains the code describing the combination of `digitalWrite(HIGH)` and `digitalWrite(LOW)` used to display each number on the 7-segment LED. Each digit is represented by turning on or off specific segments of the LED.

- **ringtone.cpp**: Here, the Fur Elise jingle is programmed. The code defines the sequence of tones to be played on the passive buzzer to recreate the melody.

## Usage

To utilize this project, you'll need an Arduino/Elegoo Uno R3 and a one-digit 7-segment LED (mine was 5161 series), along with a passive buzzer. Connect the components following the schematic in the demo video and upload the code to the microcontroller using the Arduino IDE or any compatible software. Once uploaded, the countdown and Fur Elise ringtone will commence upon powering.
