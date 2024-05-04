#include <WiFi.h>
#include <ESPAsyncWebServer.h>

// Replace with your network credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

// Create AsyncWebServer object on port 80
AsyncWebServer server(80);

// HLK-LD2410s connected to pin 32
const int sensorPin = 32;

// Debounce variables
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;
int lastSensorState = LOW;

void setup() {
  // Serial port for debugging purposes
  Serial.begin(115200);
  
  // Configure sensorPin as INPUT
  pinMode(sensorPin, INPUT);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println(WiFi.localIP());

  // Route for root / web page
  server.on("/", HTTP_GET, {
    String html = "<html><head><meta http-equiv='refresh' content='1'></head><body>";
    html += "<h1>ESP32 with HLK-LD2410s</h1>";
    html += "<p>Human presence: ";
    html += digitalRead(sensorPin) ? "Yes" : "No";
    html += "</p></body></html>";
    request->send(200, "text/html", html);
  });

  // Start server
  server.begin();
}

void loop() {
  // Read the state of the switch into a local variable:
  int reading = digitalRead(sensorPin);

  // Check if the sensor's button has been pressed/released
  if (reading != lastSensorState) {
    // Reset the debouncing timer
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // If the reading has been consistent for longer than the debounce delay, consider the button state changed
    lastSensorState = reading;
  }
}
