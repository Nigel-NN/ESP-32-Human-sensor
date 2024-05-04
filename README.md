# Human Presence Detector with Custom PCB

This project is about creating a human presence detector using an ESP32 WROOM module and a HLK-LD2410s sensor. The ESP32 hosts a web server that displays whether a human is present or not. I've developed a custom PCB for this project, making it an ultra-low power WiFi web server device for the HLK-LD2410s. This project marks my first venture into creating a practical PCB that I can apply to a real-world project. I'm super excited about further development!

## Components

- Custom PCB designed by me
- HLK-LD2410s sensor
- WiFi connection

## Setup Guide

1. **Flash the ESP32**: Use the Arduino IDE to upload the provided code to the ESP32.
2. **Web Server Setup**: The ESP32 will host a web server that you can access to see if a human is detected.

## Usage Instructions

1. **Access the Web Server**: Open a web browser and enter the IP address of the ESP32. You can find this in the serial monitor of the Arduino IDE.
2. **Monitor Human Presence**: The web page will display if a human is detected. It updates every second for real-time monitoring.

**Note**: Don't forget to replace "your_SSID" and "your_PASSWORD" in the code with your actual WiFi SSID and password.

## Safety Precautions

When setting up your hardware, always ensure everything is turned off and unplugged. Be careful when handling electronic components and always follow safety guidelines.
