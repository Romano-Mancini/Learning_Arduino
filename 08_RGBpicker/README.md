# Arduino RGB LED Color Picker

This Arduino project implements a simple RGB LED color picker that reads input from the serial monitor. The project lights up an RGB LED with the specified color.

## Functionality

The color picker accepts input in the format (R, G, B), where R, G, and B represent the intensity of the red, green, and blue components, respectively. Each component value should be between 0 and 255.

### Usage

1. Connect an RGB LED to your Arduino board, with the red pin connected to pin 6, the green pin connected to pin 5, and the blue pin connected to pin 3.
2. Upload the provided Arduino sketch to your Arduino board.
3. Open the serial monitor in the Arduino IDE or any compatible serial terminal.
4. Enter the desired color in the format (R, G, B) when prompted.
5. The RGB LED will light up with the specified color.

### Example Input

- To set the LED to pure red: Enter "(255, 0, 0)".
- To set the LED to pure green: Enter "(0, 255, 0)".
- To set the LED to pure blue: Enter "(0, 0, 255)".
- To set the LED to white: Enter "(255, 255, 255)".

### Additional Notes

- Ensure that the baud rate settings in the Arduino sketch and the serial monitor match to communicate properly.
- The RGB LED will display the specified color until a new color is entered via the serial monitor.
