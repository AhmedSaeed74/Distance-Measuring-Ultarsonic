# Ultrasonic Distance Measurement System

## Description

Welcome to the Ultrasonic Distance Measurement System! This project utilizes the ATmega32 microcontroller to measure distances using the HC-SR04 ultrasonic sensor. The system calculates the distance and displays it on a 4x16 LCD, providing an accurate and efficient way to gauge proximity.

## Features

- **Distance Measurement:** The system interfaces with the HC-SR04 ultrasonic sensor to measure distances accurately.

- **LCD Display:** The measured distance is displayed on a 4x16 LCD for easy viewing and tracking.

- **Interrupt-Driven Ultrasonic Sensor:** The ultrasonic sensor is driven by the Input Capture Unit (ICU) using the ATmega32 ICU driver.

## Usage

1. **Hardware Setup:** Configure the ATmega32 microcontroller with the necessary drivers for GPIO, ICU, and LCD. Follow the connection specifications mentioned in the requirements.

2. **ICU Configuration:** Configure the ICU driver to operate at F_CPU/8 and detect the rising edge as the first edge.

3. **Ultrasonic Sensor Initialization:** Initialize the ultrasonic driver, configure the ICU, and set up a callback function for the ICU driver.

4. **Distance Measurement:** Use the Ultrasonic_readDistance function to obtain the measured distance in centimeters.

5. **Trigger Ultrasonic Sensor:** Use the Ultrasonic_Trigger function to send the trigger pulse to the ultrasonic sensor, initiating distance measurement.

6. **Hardware Connections:** Ensure that the required hardware connections are correctly established as specified in the provided document.

