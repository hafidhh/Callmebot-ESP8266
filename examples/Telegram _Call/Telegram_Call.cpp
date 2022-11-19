// Example TelegramCall
// Github : 
// https://github.com/hafidhh
// https://github.com/hafidhh/Callmebot_ESP8266

#include <ESP8266WiFi.h>
#include <Callmebot_ESP8266.h>

const char* ssid = "your_ssid";
const char* password = "your_password";

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

  // Telegram Call
  Telegramcall("@username/phone", "message", "en-GB-Standard-B", "2", "yes", "30");
}

void loop() {
  
}