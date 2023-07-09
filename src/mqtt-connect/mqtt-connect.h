#ifndef MQTT_CONNECT
#define MQTT_CONNECT

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include "variables/variables.h"

void loop_mqtt_connection();
void callback(char* topic, byte* payload, unsigned int length);
void setup_mqtt_connect();
void connect_mqtt();

#endif