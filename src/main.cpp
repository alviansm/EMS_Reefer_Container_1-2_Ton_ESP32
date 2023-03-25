#include <Arduino.h>
#include <SoftwareSerial.h>

// ======= CONFIGURATION ========
// ==== SERIAL COMMUNICATION RECEIVE ====
SoftwareSerial arduino(17, 16); // RX, TX

void setup() {
  Serial.begin(9600);
  arduino.begin(9600);
}

void loop() {
  String pesan = "";
  while (arduino.available() > 0) {
    pesan += char(arduino.read());
  }
  pesan.trim();
  Serial.println(pesan);
  delay(1000);
}