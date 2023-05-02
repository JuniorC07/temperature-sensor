# Temperature Sensor Code - University assignment

This code reads temperature data from a TMP36 sensor connected to an Arduino Uno R3 board. The temperature data is then converted to Celsius and displayed on the serial monitor.

## Components

- 1x TMP36 Temperature Sensor
- 1x Arduino Uno R3 Board

## Installation and Setup

1. Connect the TMP36 sensor to the Arduino Uno R3 board as follows:

   - Pin 1 of the sensor to 5V of the board
   - Pin 2 of the sensor to analog input A1 of the board
   - Pin 3 of the sensor to GND of the board

2. Upload the code to the Arduino Uno R3 board.

## Usage

1. Open the serial monitor on the Arduino IDE.
2. Observe the temperature readings displayed in Celsius.

Example:

![Example](/example/example.gif)

## Code Explanation

The code reads the analog input value from the TMP36 sensor and converts it to volts. The volts are then converted to millivolts and the millivolts are converted to temperature in Celsius. The temperature value is then displayed on the serial monitor. The delay function is used to wait for 2 seconds before reading the sensor again.

## Author

- [Junior Camargo](https://github.com/JuniorC07)

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.