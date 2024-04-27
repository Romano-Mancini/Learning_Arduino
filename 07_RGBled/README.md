# Arduino RGB LED Color Cycling

This Arduino project implements a color cycling effect on an RGB LED. The project smoothly transitions the LED through various colors by changing the intensity of each color component.

### Usage

1. Connect an RGB LED to your Arduino board, with the red pin connected to pin 5, the green pin connected to pin 3, and the blue pin connected to pin 6.
2. Upload the provided Arduino sketch to your Arduino board.
3. The RGB LED will start cycling through colors automatically.

### Additional Notes

- The color cycling effect is achieved by gradually changing the intensity of each color component using PWM (Pulse Width Modulation).
- Each color transition takes approximately 2.5 seconds (250 milliseconds per step for 10 steps).
- The LED cycles through colors continuously until the Arduino is reset or powered off.
