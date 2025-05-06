# iot-based-smart-light-system

## Project Overview
This project presents an IoT-based Smart Light System designed to automate and remotely control lighting using internet-enabled devices. The system uses a microcontroller (NodeMCU ESP8266), sensors (like LDR and motion sensors), and cloud-based platforms to enable energy-efficient, user-friendly lighting control.

The core objective is to reduce energy consumption and increase user convenience by automatically switching lights based on environmental conditions and user presence. This project also enables real-time remote control and monitoring via a mobile app or web interface.


## components and apps used
Hardware Components:
NodeMCU ESP8266 (Wi-Fi enabled microcontroller)

LDR (Light Dependent Resistor) – for detecting ambient light levels

PIR Motion Sensor – to detect human motion

Relay Module – to control AC bulb

LED or Light Bulb – for testing/control

Breadboard and Jumper Wires

Power Supply (5V)

Software & Applications:
Arduino IDE – for coding and uploading to the NodeMCU

Blynk App (or IoT platform like Firebase/MQTT) – for remote control and monitoring

Wi-Fi Network – for cloud communication

GitHub – for version control and collaboration


## libraries used for compiling of code
The following Arduino libraries are used for successful compilation and uploading of the code to the NodeMCU:

ESP8266WiFi.h – handles Wi-Fi connectivity

BlynkSimpleEsp8266.h – connects NodeMCU to the Blynk app

SimpleTimer.h – for non-blocking timing functions

Arduino.h – standard Arduino functions


## project outcome
After building and testing the system, the following outcomes were achieved:

The lights automatically turn on when:

The room is dark (low LDR value)

Motion is detected via the PIR sensor

Lights remain off when the room is bright or no movement is detected

Users can override or monitor light status remotely using the Blynk app

Power consumption is optimized as lights are used only when needed


## conclusion
This project successfully demonstrates how IoT and embedded systems can work together to create a smart and efficient lighting solution. The integration of sensors and Wi-Fi connectivity allows for responsive and remote-controlled lighting that conserves energy and enhances user convenience. Future upgrades may include integration with voice assistants (Alexa, Google Home), scheduling features, or energy usage monitoring.
![Screenshot (48)](https://github.com/user-attachments/assets/131a1a3c-25f3-4b5d-a596-990f134d48d4)


