# Human Presence Detector

This project uses an ESP32 WROOM module and a HLK-LD2410s sensor to detect if a human is present. The ESP32 hosts a web server that shows if a human is detected.

## What You Need

ESP32 WROOM module
HLK-LD2410s sensor
Jumper wires
WiFi connection

##How to Set Up

Connect the Sensor: Connect the TX pin of the sensor to pin 32 and the RX pin to pin 33 on the ESP32.
Flash the ESP32: Use the Arduino IDE to flash the ESP32 with the provided code.
Set Up the Web Server: The ESP32 will host a web server that you can access to see if a human is detected.

##How to Use

Connect to the Web Server: Open a web browser and enter the IP address of the ESP32. You can find this in the serial monitor of the Arduino IDE.
Check for Human Presence: The web page will show if a human is detected. It updates every second.
Remember to replace "your_SSID" and "your_PASSWORD" in the code with your actual WiFi SSID and password.

## Safety

Always be careful when working with hardware. Make sure everything is turned off and unplugged when you’re setting it up.
