# Arduino Servo Motor Control with 4-Digits LED Display

This Arduino project controls an SG90 servo motor and a 5641AS 4-digits LED display using an Elegoo Uno R3 board (or any other Arduino-compatible board). The position of the servo motor is determined by the analog input from a potentiometer, and the LED display shows the corresponding angle in degrees.

## Functionality

The project allows the user to:

- Control the position of the SG90 servo motor using a potentiometer.
- Display the angle of the servo motor on a 4-digits LED display.
- Adjust the brightness of the LED display.

## Usage

1. Connect the potentiometer's output to analog pin A5.
2. Connect the servo motor signal pin to a digital pin on the Arduino board.
3. Connect the 4-digits LED display according to the wiring shown in the test video.
4. Upload the provided Arduino sketch to your Arduino board.
5. Rotate the potentiometer to change the position of the servo motor.
6. The LED display will show the corresponding angle in degrees.

## Dependencies

This project relies on the following libraries:

- `Servo.h`: Standard Arduino library for controlling servo motors.
- `SevSeg.h`: Library for driving multi-digit 7-segment displays. It's used to control the 4-digits LED display.

Ensure that the necessary libraries are installed in your Arduino IDE before uploading the sketch.

## Additional Notes

- Adjust the wiring as demonstrated in the video tutorial or your specific setup.
- The `SevSeg` library provides functions to control the 4-digits LED display, including setting brightness and displaying numbers.
- The LED display updates every 5 milliseconds to show the current angle of the servo motor.
