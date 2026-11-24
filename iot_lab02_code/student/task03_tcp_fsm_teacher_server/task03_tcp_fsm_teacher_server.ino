// Task 3 — TCP client + hierarchical FSM
// Starter version. Fill the TODO parts.

#include <WiFiS3.h>

const char WIFI_SSID[] = "IoT_test_Network";
const char WIFI_PASS[] = "CHANGE_ME";
const char STUDENT_NAME[] = "CHANGE_ME";

IPAddress SERVER_IP(192, 168, 4, 2);
const uint16_t SERVER_PORT = 5555;

const int TEMP_PIN = A0;
const float ADC_VREF = 4.67f;  // measured in the lab
const float ADC_MAX_CODE = 4095.0f;
const float MCP9700_OFFSET_V = 0.500f;
const float MCP9700_SLOPE_V_PER_C = 0.010f;

const unsigned long WIFI_RETRY_MS = 3000;
const unsigned long TCP_RETRY_MS = 2000;
const unsigned long SAMPLE_PERIOD_MS = 2000;

unsigned long lastWiFiAttempt = 0;
unsigned long lastTcpAttempt = 0;
unsigned long waitStartedAt = 0;

WiFiClient client;
float latestTemperatureC = 0.0f;

enum MainState {
  START,
  WIFI_CONNECT,
  DHCP_WAIT,
  TCP_CONNECT,
  COMMS_READY
};

enum CommsState {
  READ_SENSOR,
  SEND_DATA,
  WAIT
};

MainState state = START;
CommsState commsState = READ_SENSOR;

bool hasIPAddress() {
  IPAddress ip = WiFi.localIP();
  // TODO: return true if ip is not 0.0.0.0.
  return false;
}

float readTemperatureC() {
  int raw = analogRead(TEMP_PIN);

  // TODO: ADC code -> voltage -> MCP9700A temperature.
  return 0.0f;
}

void sendHello() {
  // TODO: send exactly: HELLO|<name>\n
}

void sendTemperature(float temperatureC) {
  // TODO: send exactly: TEMP|<name>|<temperature>\n
}

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
}

void loop() {
  switch (state) {
    case START:
      // TODO: initialization is complete. Which state comes next?
      break;

    case WIFI_CONNECT:
      // Wi-Fi association and DHCP are intentionally separate.
      // TODO 1: WiFi.status() == WL_CONNECTED -> DHCP_WAIT.
      // TODO 2: every WIFI_RETRY_MS call WiFi.begin(...).
      break;

    case DHCP_WAIT:
      // TODO 1: Wi-Fi lost -> WIFI_CONNECT.
      // TODO 2: hasIPAddress() -> TCP_CONNECT.
      break;

    case TCP_CONNECT:
      // TODO 1: Wi-Fi lost -> WIFI_CONNECT.
      // TODO 2: no IP address -> DHCP_WAIT.
      // TODO 3: periodically call client.connect(SERVER_IP, SERVER_PORT).
      // On success send HELLO and enter COMMS_READY.
      break;

    case COMMS_READY:
      // TODO 1: Wi-Fi lost -> WIFI_CONNECT.
      // TODO 2: IP address lost -> DHCP_WAIT.
      // TODO 3: TCP lost -> TCP_CONNECT.

      switch (commsState) {
        case READ_SENSOR:
          // TODO: read temperature, then go to SEND_DATA.
          break;

        case SEND_DATA:
          // TODO: send temperature, remember millis(), then go to WAIT.
          break;

        case WAIT:
          // TODO: after SAMPLE_PERIOD_MS go back to READ_SENSOR.
          break;
      }
      break;
  }
}
