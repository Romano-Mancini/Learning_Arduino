# Arduino DHT Temperature and Humidity Sensor

This Arduino project reads temperature and humidity data from a DHT11 sensor and outputs the values to the serial monitor.

## Functionality

The DHT sensor provides temperature and humidity readings, which are displayed on the serial monitor in Celsius (°C) for temperature and percentage (%) for humidity.

### Usage

1. Connect a DHT11 sensor to your Arduino board. Wire the sensor's data pin to digital pin 2.
2. Upload the provided Arduino sketch to your Arduino board.
3. Open the serial monitor in the Arduino IDE or any compatible serial terminal.
4. The temperature and humidity readings will be displayed in the serial monitor, updated every 700 milliseconds.

### Additional Notes

- Ensure that the DHT library is installed in your Arduino IDE before uploading the sketch.
- The DHT11 sensor provides relatively low accuracy compared to other DHT models. It is suitable for basic temperature and humidity monitoring.
- The sensor readings may vary depending on environmental conditions and sensor placement.
