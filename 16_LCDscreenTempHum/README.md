# Temperature and Humidity Display Using DHT11 and LCD1602

This Arduino project reads temperature and humidity data from a DHT11 sensor and displays the values on an LCD1602 display. The project requires the LiquidCrystal and DHT libraries to be installed. A potentiometer is used to adjust the contrast of the LCD screen.

## Usage

1. **Connect the Hardware:**
   - Follow the wiring specified in the circuit diagram below to connect the DHT11 sensor, LCD1602 display, and the potentiometer.
   
2. **Upload the Sketch:**
   - Upload the provided Arduino sketch to your Arduino board.

3. **View the Data:**
   - The temperature (in Celsius) and humidity (in percentage) will be displayed on the LCD1602 display, updating every second.
   - Adjust the potentiometer to achieve the desired contrast on the LCD screen.

## Circuit Diagram

Connect the components as follows:

- **DHT11 Sensor:**
  - VCC to Arduino 5V
  - GND to Arduino GND
  - Data to Arduino pin 13 (TEMP)

- **LCD1602 Display:**
  - RS to Arduino pin 12
  - E to Arduino pin 11
  - D4 to Arduino pin 6
  - D5 to Arduino pin 5
  - D6 to Arduino pin 4
  - D7 to Arduino pin 3
  - VSS to Arduino GND
  - VDD to Arduino 5V
  - VO (contrast pin) to the middle pin of a 10K potentiometer
  - One end of the potentiometer to Arduino 5V
  - The other end of the potentiometer to Arduino GND

## Dependencies

This project depends on the LiquidCrystal and DHT libraries. Ensure these libraries are installed in your Arduino IDE before uploading the sketch.

### Installing Libraries

1. Open the Arduino IDE.
2. Go to `Sketch` > `Include Library` > `Manage Libraries`.
3. In the Library Manager, search for and install the following libraries:
   - `LiquidCrystal` (should be pre-installed with the Arduino IDE)
   - `DHT sensor library` by Adafruit

## Additional Notes

- Ensure that all connections are secure and correct as per the circuit diagram.
- The temperature and humidity values are updated every second.
- Adjust the potentiometer to set the LCD contrast for optimal readability.
