#include "internet-connect.h"

String wifiSSID = "@wifi.ib";
String wifiPassword = "lsra6412";

void setup_wifi_connect() {
	WiFi.begin(wifiSSID.c_str(), wifiPassword.c_str());
	Serial.println("Connecting to WiFi");
	while (WiFi.status() != WL_CONNECTED) {
		Serial.print(".");
		delay(500);
	}
	Serial.println("WiFi Connected.");
}

