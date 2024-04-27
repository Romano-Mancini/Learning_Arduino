# Arduino Voltage Reader

This Arduino project reads the analog voltage from a sensor connected to pin A0 and outputs the voltage value to the serial monitor.

## Functionality

The project reads the analog voltage from a sensor connected to pin A0 and converts it to a voltage value. It then sends the voltage value and the corresponding analog reading to the serial monitor.

### Usage

1. Connect a sensor or voltage source to your Arduino board. Connect the positive terminal of the sensor or voltage source to pin A0 and the negative terminal to GND.
2. Upload the provided Arduino sketch to your Arduino board.
3. Open the serial monitor in the Arduino IDE or any compatible serial terminal.
4. The voltage value and the corresponding analog reading will be displayed in the serial monitor, updated every 500 milliseconds.

### Additional Notes

- Ensure that the sensor or voltage source is connected properly and provides a voltage within the Arduino's operating range (0-5V).
- The formula `(message * 5) / 1023;` is used to convert the analog reading to a voltage value, assuming a 5V reference voltage.
- Adjusting the voltage applied to the sensor or voltage source will result in a different analog reading and corresponding voltage value displayed in the serial monitor.
