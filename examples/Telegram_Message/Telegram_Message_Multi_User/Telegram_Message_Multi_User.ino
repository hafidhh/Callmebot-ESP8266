/**
 * @file Telegram_Message_Multi_User.ino
 * @author Hafidh Hidayat (hafidhhidayat@hotmail.com)
 * @brief Example Telegram Message Multi
 * 
 * @copyright Copyright (c) 2023
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
// username : @username or phonenumber (Indonesia +62, Example: "+62897461238")
// You need to authorize CallMeBot to contact you using this link : https://api2.callmebot.com/txt/login.php. 
// Or alternatively, you can start the bot sending /start to @CallMeBot_txtbot.
String username1 = "@your_username1/phonenumber1";
String username2 = "@your_username2/phonenumber2";
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

	//Telegram Message
	String username = username1+"|"+username2;
	Callmebot.telegramMessage(username, messsage);
}

void loop() {
	
}