# Arduino Traffic Light Simulation

This Arduino project simulates a traffic light system with three LEDs representing green, yellow, and red lights.

## Functionality

The project cycles through the traffic light sequence:
1. Green light: Allows traffic to proceed.
2. Yellow light: Signals to prepare to stop.
3. Red light: Stops traffic.

### Usage

1. Connect three LEDs to your Arduino board, with one LED representing each traffic light color (green, yellow, red).
2. Upload the provided Arduino sketch to your Arduino board.
3. The LEDs will cycle through the traffic light sequence continuously.

### Additional Notes

- Ensure that the LEDs are connected properly, with the anode (longer leg) connected to the specified pins (0, 1, 2) and the cathode (shorter leg) connected to GND.
- Adjust the delay times for each light (green, yellow, red) in the `loop()` function to customize the duration of each traffic light phase.
- You can customize the behavior of each LED by modifying the delay times and adding additional logic to the `loop()` function.
