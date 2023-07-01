#include "receive-data-arduino.h"

void setup_receive_data_arduino(){
    Serial2.begin(4800, SERIAL_8N1, 16, 17);
}

void loop_receive_data_arduino() {
    fullData = "";
    while ((Serial2.available() > 0)) {
        fullData = Serial2.readString();
    }
    fullData.trim();
    if (fullData.length() > 5) {
        Serial.println(fullData);
    }
}