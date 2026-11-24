// Task 1 — MCP9700A-E temperature sensor
// Fill the TODO parts.

const int TEMP_PIN = A0;
const float ADC_VREF = 4.67f;  // measured in the lab; do not assume exactly 5.00 V
const float ADC_MAX_CODE = 4095.0f;

// TODO: take these values from the MCP9700A datasheet.
const float MCP9700_OFFSET_V = 0.0f;
const float MCP9700_SLOPE_V_PER_C = 1.0f;

void setup() {
  Serial.begin(115200);

  // TODO: configure the ADC for 12-bit readings.
}

void loop() {
  int raw = analogRead(TEMP_PIN);

  // TODO: convert ADC code -> voltage.
  float voltage = 0.0f;

  // TODO: convert voltage -> temperature in °C.
  float temperatureC = 0.0f;

  Serial.print("raw=");
  Serial.print(raw);
  Serial.print("  V=");
  Serial.print(voltage, 3);
  Serial.print("  T=");
  Serial.print(temperatureC, 2);
  Serial.println(" C");

  delay(1000);
}
