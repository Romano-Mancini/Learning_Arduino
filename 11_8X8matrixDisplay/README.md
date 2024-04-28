# ASCII Symbol Display on 8x8 LED Matrix

This Arduino sketch is designed to represent ASCII symbols on an 8x8 LED matrix display. The code utilizes the LedControl library to interface with the LED matrix hardware.

## LED Matrix Model and IC

The LED matrix model used in this project is the 1088AS, and it is connected to the MAX7219 IC. Make sure to wire the LED matrix to your Arduino board according to the specifications of the MAX7219 datasheet.

## Prerequisites

Before using this code, make sure you have the LedControl library installed in your Arduino IDE. You can download the library from the Arduino Library Manager or from the official LedControl repository on GitHub.

## Usage

1. Connect your 8x8 LED matrix display to your Arduino board, ensuring that the pins are correctly wired.
2. Upload the provided sketch to your Arduino board using the Arduino IDE.
3. Use the Serial Monitor to input sentences or strings of characters. The sketch will display the corresponding ASCII symbols on the LED matrix display.

## Additional Files

This repository includes a file named `symbols.h`, which contains definitions for all ASCII symbols in ascending order. This file is essential for the proper functioning of the sketch and must be included in the Arduino project.
The file can also be downloaded on my repository at the following link: https://github.com/Romano-Mancini/AsciiSymbols8x8Display

## Contributing

Contributions to this project are welcome and encouraged! Whether you have suggestions for improvements, bug fixes, or additional features, feel free to contribute by opening an issue or submitting a pull request. This is especially true for improvements to the `symbols.h` file.
