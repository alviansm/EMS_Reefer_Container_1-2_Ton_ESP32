#include <Arduino.h>

String data_hujan;

void setup() {
  Serial.begin(9600);
  Serial2.begin(4800, SERIAL_8N1, 16, 17);
}

void loop() {
  data_hujan = "";
  while ((Serial2.available() > 0)) {
    data_hujan = Serial2.readString();
  }
  data_hujan.trim();
  if (data_hujan.length() > 5) {
    Serial.println(data_hujan);
  }
}