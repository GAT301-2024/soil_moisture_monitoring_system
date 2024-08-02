# soil_moisture_monitoring_system
OTIM_JUSTINE_AROP
# Soil Moisture Monitoring System

## Overview
This project is a soil moisture monitoring system that uses an ESP32 microcontroller and a soil moisture sensor to read the moisture level of the soil and display the percentage moisture reading along with the soil status (wet, medium, or dry) in the serial monitor.

## Requirements

### Hardware Components
- ESP32 Development Board
- Soil Moisture Sensor (with analog output)
- Breadboard (optional, for prototyping)
- Jumper Wires

### Software Components
- Arduino IDE (with ESP32 board support installed)
- EasyEDA (for schematic design)

### Power Supply
- 3.3V power supply from the ESP32
- Ground (GND) connection from the ESP32

### Pin Connections
- VCC of the soil moisture sensor connected to the 3.3V pin of the ESP32
- GND of the soil moisture sensor connected to the GND pin of the ESP32
- Analog output of the soil moisture sensor connected to GPIO 13 of the ESP32

## Steps to Set Up and Use the System

1. **Gather Hardware Components**
   - Obtain an ESP32 development board, a soil moisture sensor, a breadboard, and jumper wires.

2. **Set Up the Development Environment**
   - Install the Arduino IDE on your computer.
   - Install the ESP32 board support in the Arduino IDE by going to `File > Preferences` and adding the following URL to the "Additional Boards Manager URLs" field: `https://dl.espressif.com/dl/package_esp32_index.json`.
   - Go to `Tools > Board > Boards Manager`, search for "esp32", and install the ESP32 board package.

3. **Design the Schematic**
   - Open EasyEDA and create a new schematic project.
   - Add the ESP32 and soil moisture sensor components to the schematic.
   - Connect the VCC pin of the soil moisture sensor to the 3.3V pin of the ESP32.
   - Connect the GND pin of the soil moisture sensor to the GND pin of the ESP32.
   - Connect the analog output pin of the soil moisture sensor to GPIO 13 of the ESP32.
   - Save and export the schematic as needed.

4. **Wire the Components**
   - Connect the components on a breadboard according to the schematic design.
   - Ensure that the connections are secure and correct.

5. **Write the Code**
   - Open the Arduino IDE and create a new sketch.
   - Write the code to read the analog value from the soil moisture sensor, convert it to a percentage, and display the reading and soil status in the serial monitor.
