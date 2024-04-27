# Arduino Potentiometer Voltage Filtering

This Arduino project showcases how a potentiometer filters voltage to control the brightness of three LEDs using pulse-width modulation (PWM).

## Functionality

The project reads the analog voltage from a potentiometer and uses the value to control the brightness of three LEDs. The potentiometer acts as a voltage divider, and the Arduino reads the analog value to determine the brightness level of the LEDs.

### Usage

1. Connect a potentiometer to your Arduino board.
2. Connect the LEDs to your Arduino board.
3. Upload the provided Arduino sketch to your Arduino board.
4. Rotate the potentiometer knob to vary the voltage. The brightness of the LEDs will change accordingly.

### Additional Notes

- Ensure that the potentiometer is connected properly and wired as a voltage divider.
- The formula `value = (read/1023.0)*255;` is used to scale the analog reading to a value between 0 and 255, suitable for PWM control of the LEDs.
- Adjusting the potentiometer changes the voltage applied to the analog pin, resulting in a different analog reading and adjusting the brightness of the LEDs accordingly.
