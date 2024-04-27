# Arduino Calculator with 7-Segment LED Display

This Arduino project implements a basic calculator that accepts inputs from the serial monitor and displays the result on a 4-digit 7-segment LED display (model 5641AS). The project requires the SevSeg library to be installed.

## Functionality

The calculator supports the following operations:
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Modulus (%)

### Usage

1. Connect the 7-segment display according to the wiring specified in the code.
2. Upload the provided Arduino sketch to your Arduino board.
3. Open the serial monitor in the Arduino IDE or any compatible serial terminal.
4. Enter the first number when prompted.
5. Enter the second number when prompted.
6. Enter the desired operation (+, -, *, /, %) when prompted.
7. The result will be displayed on the 7-segment display.

### Dependencies

This project depends on the SevSeg library, which provides functions to control 7-segment LED displays. Ensure that the SevSeg library is installed in your Arduino IDE before uploading the sketch.

## Additional Notes

- Ensure that the baud rate settings in the Arduino sketch and the serial monitor match to communicate properly.
- The calculator performs integer arithmetic. Floating-point arithmetic is not supported.
- The result is displayed on the 7-segment display for a short period before being cleared.
