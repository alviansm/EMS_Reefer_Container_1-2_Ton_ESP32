#include "mqtt-connect.h"

String mqttBroker = "test.mosquitto.org";
WiFiClient client;
PubSubClient mqtt(client);

void setup_mqtt_connect() {
    mqtt.setServer(mqttBroker.c_str(), 1883);
}

void connect_mqtt() {
    while(!mqtt.connected()) {
        Serial.println("Connecting MQTT ...");
        if (mqtt.connect("esp32/ecoreefermms")) {
            mqtt.subscribe("esp32/ecoreefermms-topic");            
        }
    }
}

void loop_mqtt_connection() {
    if (!mqtt.connected()) {
        connect_mqtt();
        Serial.println("MQTT Connected");        
    }
    mqtt.loop();
    mqtt.publish("esp32/ecoreefermms-topic", dummyFullData.c_str());
    Serial.println("Data sent!");
}