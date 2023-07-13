#include <Arduino.h>
#include "internet-connect/internet-connect.h"
#include "receive-data-arduino/receive-data-arduino.h"
#include "mqtt-connect/mqtt-connect.h"
void setup() {
  Serial.begin(9600);
  setup_wifi_connect();
  setup_mqtt_connect();
  setup_receive_data_arduino();
}

void loop() {
  loop_receive_data_arduino();
  loop_send_data_arduino();
  loop_mqtt_connection();
  delay(3000);
}