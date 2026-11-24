// Task 4 — Reuse your completed Task 3 Arduino client,
// but connect it to the ZMQ_STREAM server running on your own PC.

#include <WiFiS3.h>

const char WIFI_SSID[] = "IoT_test_Network";
const char WIFI_PASS[] = "CHANGE_ME";
const char STUDENT_NAME[] = "CHANGE_ME";

// TODO: replace with YOUR PC IPv4 address from ipconfig / ip addr.
IPAddress SERVER_IP(192, 168, 4, 0);
const uint16_t SERVER_PORT = 5555;

// Keep the same values/logic as your completed Task 3:
//   ADC_VREF = 4.67 V
//   START -> WIFI_CONNECT -> DHCP_WAIT -> TCP_CONNECT -> COMMS_READY
//   COMMS_READY contains READ_SENSOR -> SEND_DATA -> WAIT.
//
// Copy your completed Task 3 FSM here and only change SERVER_IP.
// Protocol remains:
//   HELLO|<name>\n
//   TEMP|<name>|<value>\n

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
}

void loop() {
  // TODO: paste/adapt your completed Task 3 FSM.
}
