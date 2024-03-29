/**
 * @file Facebook_Message.ino
 * @author Hafidh Hidayat (hafidhhidayat@hotmail.com)
 * @brief Example Facebook Message
 * 
 * @copyright Copyright (c) 2022
 * 
 * Github :
 * https://github.com/hafidhh
 * https://github.com/hafidhh/Callmebot_ESP8266
 */

#include <ESP8266WiFi.h>
#include <Callmebot_ESP8266.h>

const char* ssid = "your_ssid";
const char* password = "your_password";

// Note :
// apiKey : Follow instruction on https://www.callmebot.com/blog/free-api-facebook-messenger/
String apiKey = "your_apiKey";
String messsage = "your_text_message";

void setup() {
	Serial.begin(115200);

	WiFi.begin(ssid, password);
	Serial.println("Connecting");
	while(WiFi.status() != WL_CONNECTED) {
		delay(500);
		Serial.print(".");
	}
	Serial.println("");
	Serial.print("Connected to WiFi network with IP Address: ");
	Serial.println(WiFi.localIP());
	
	Callmebot.begin();

	// Facebook Message
	Callmebot.facebookMessage(apiKey, messsage);
	Serial.println(Callmebot.debug());
}

void loop() {
	
}