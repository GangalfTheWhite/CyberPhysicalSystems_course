#include <WiFiNINA.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (WiFi.status() == WL_NO_MODULE) {
    Serial.println("WiFi module not found!");
  }

  Serial.println("Scanning for available networks...");
  uint8_t numNetworks = WiFi.scanNetworks();

  // defined i as the variable name
  // assignment original form: for (uint8_t = 0; i < numNetworks; i++)
  for (uint8_t i = 0; i < numNetworks; i++) {
    Serial.print("Network: ");
    Serial.print(WiFi.SSID(i));
    Serial.print(" | Signal Strength: ");
    Serial.print(WiFi.RSSI(i));
    Serial.print(" dBm | Encryption: ");
    Serial.println(WiFi.encryptionType(i));
    Serial.print("Total networks found: ");
  }

  // added a print for the total network count
  Serial.println(numNetworks);

  // added and an extra empty println outside of the for loop
  // to increase the output readability
  Serial.println();

  // combined all three lines of delay into one,
  // totalling the same amount of time
  delay(30000);
}
