# Arduino LED Pulse

This Arduino project pulses multiple LEDs connected to different pins using pulse-width modulation (PWM).

## Functionality

The project pulses LEDs connected to specified pins by gradually increasing and then decreasing their brightness using PWM. This creates a pulsating effect on each LED.

### Usage

1. Connect LEDs to your Arduino board, ensuring to connect the cathode (shorter leg) of each LED to GND and the anode (longer leg) to the specified pins (red, yellow, green, blue, white).
2. Upload the provided Arduino sketch to your Arduino board.
3. The LEDs will pulse one after the other in a loop.

### Additional Notes

- Ensure that the LEDs are connected properly, with the cathode connected to GND and the anode connected to the specified pins.
- Adjust the pins assigned to each LED (red, yellow, green, blue, white) in the sketch according to your circuit setup.
- Adjusting the delay values in the `LEDpulse()` function will change the speed of the pulsating effect.
- You can customize the behavior of each LED by modifying the `LEDpulse()` function or adding additional functions to control the LEDs separately.
