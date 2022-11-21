// Example Telegram Group Message
// Github :
// https://github.com/hafidhh
// https://github.com/hafidhh/Callmebot_ESP8266

#include <ESP8266WiFi.h>
#include <Callmebot_ESP8266.h>

const char* ssid = "your_ssid";
const char* password = "your_password";

String apiKey = "@your_username/phonenumber";
String message = "your_text_message";

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

  // Telegram Group Message
  telegramGroup(apiKey, message);
}

void loop() {
  
}