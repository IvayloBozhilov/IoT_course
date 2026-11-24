// Task 2 — Wi-Fi association + DHCP configuration
// Fill the TODO parts.

#include <WiFiS3.h>

const char WIFI_SSID[] = "IoT_test_Network";
const char WIFI_PASS[] = "CHANGE_ME";

bool hasIPAddress() {
  IPAddress ip = WiFi.localIP();

  // TODO: return true only when the address is not 0.0.0.0.
  return false;
}

void printNetworkInfo() {
  Serial.println();
  Serial.println("--- Network configuration ---");

  // TODO: print SSID, IP address, subnet mask, gateway and RSSI.
}

void setup() {
  Serial.begin(115200);

  // TODO: begin the Wi-Fi connection.

  // Step 1: wait for Wi-Fi association.
  // TODO: wait until WiFi.status() == WL_CONNECTED.

  // Step 2: association does not guarantee that DHCP has already
  // assigned an IP address.
  // TODO: wait until hasIPAddress() is true.

  printNetworkInfo();
}

void loop() {
}
