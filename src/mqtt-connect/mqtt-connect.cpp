#include "mqtt-connect.h"

String mqttBroker = "test.mosquitto.org";
WiFiClient client;
PubSubClient mqtt(client);

void loop_mqtt_connection() {
    // mqtt connect - loop
    if (!mqtt.connected()) {
        connect_mqtt();
        Serial.println("MQTT Connected");        
    }    
    // publish
    randomizeData();
    // mqtt.publish("esp32/ecoreefermms-topic", dummyFullData.c_str());
    Serial.println("Data sent!");    
    mqtt.loop();
}

void callback(char* topic, byte* payload, unsigned int length) {
    String tempStatus;
    for (int i=0; i < length; i++){
        tempStatus = tempStatus + (char)payload[i];        
    }
    if ((tempStatus == dummyFullData) || tempStatus.length() < 1) {
            mqtt_received_message = "No Status";
        } else {
            mqtt_received_message = tempStatus;
    }
    Serial.println(tempStatus);
}

void setup_mqtt_connect() {
    mqtt.setServer(mqttBroker.c_str(), 1883);
    // subscribe
    mqtt.subscribe("esp32/ecoreefermms-topic-status");    
    mqtt.setCallback(callback);
}

void connect_mqtt() {
    while(!mqtt.connected()) {
        Serial.println("Connecting MQTT ...");
        if (mqtt.connect("esp32/ecoreefermms")) {
            mqtt.subscribe("esp32/ecoreefermms-topic");
            mqtt.subscribe("esp32/ecoreefermms-topic-status");            
        }
    }
}