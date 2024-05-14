# Button-Controlled Motor Project

## Overview

This project demonstrates a simple setup where a button is used to control the movement of a motor powered by a 9V battery. The motor is controlled using an IRFZ44N MOSFET, which acts as a switch to regulate the motor's power supply.

## Functionality

The project achieves the following functionality:

- Utilizes a button as a trigger to control the motor.
- The motor moves when the button is pressed and stops when the button is released.
- Powered by a 9V battery.
- The IRFZ44N MOSFET acts as a switch to regulate the motor's power supply.

## Usage

To use the project:

1. Connect the components as follows:
   - Button: Connected to pin 2 of the Arduino board, configured as INPUT.
   - IRFZ44N MOSFET: Connected to pin 3 of the Arduino board, configured as OUTPUT.
   - Motor: Connected to the IRFZ44N MOSFET to control its power supply.
   - 9V Battery: Powers the motor and Arduino.

2. Upload the provided Arduino sketch to your Arduino board.

3. Press the button to start the motor. Release the button to stop the motor.

## Credits and Specific License

Inspired by the official Arduino Project Book, this project is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0, consistent with the license used by the authors.
