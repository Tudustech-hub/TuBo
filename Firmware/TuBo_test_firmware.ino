#include <WiFi.h>
#include <BLEDevice.h>
#include <BLEServer.h>

#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("TuBo Mini ESP32 Initializing");

  // Bluetooth discovery
  BLEDevice::init("TuBo-ESP32");
  BLEServer *pServer = BLEDevice::createServer();
  Serial.println("BLE ready.");

  // Scan available Wi-Fi networks
  Serial.println("Scanning Wi-Fi...");
  int n = WiFi.scanNetworks();
  Serial.printf("Found %d networks\n", n);

  Serial.println("TuBo Board Ready!");
}
