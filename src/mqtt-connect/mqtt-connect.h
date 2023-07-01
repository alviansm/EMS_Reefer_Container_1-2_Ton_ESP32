#ifndef MQTT_CONNECT
#define MQTT_CONNECT

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include "variables/variables.h"

void setup_mqtt_connect();
void connect_mqtt();
void loop_mqtt_connection();

#endif