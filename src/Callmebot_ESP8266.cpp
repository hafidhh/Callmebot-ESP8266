#include "Arduino.h"
#include "Callmebot_ESP8266.h"
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include <UrlEncode.h>

/**
 * CallMeBot WhatsApp Messages
 * @param phoneNumber Indonesia +62, Example: "+62897461238"
 * @param apiKey "apiKey"
 * @param message "textmessage"
 * @returns apiKey : https://www.callmebot.com/blog/free-api-whatsapp-messages/.
 */
void Whatsapp(String phoneNumber, String apiKey, String message) {
  // Data to send with HTTP POST
  String url = "http://api.callmebot.com/whatsapp.php?phone=" + phoneNumber + "&apikey=" + apiKey + "&text=" + urlEncode(message);
  WiFiClient client;    
  HTTPClient http;
  http.begin(client, url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  
  // Send HTTP POST request
  int httpResponseCode = http.POST(url);
  if (httpResponseCode == 200){
    Serial.print("Message sent successfully");
  }
  else{
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}

/**
 * CallMeBot Facebook Messages.
 * @param apiKey "apiKey"
 * @param message "textmessage"
 * @returns apiKey : https://www.callmebot.com/blog/free-api-facebook-messenger/
 */
void Facebook(String apiKey, String message) {
  // Data to send with HTTP POST
  String url = "https://api.callmebot.com/facebook/send.php?apikey=" + apiKey + "&text=" + urlEncode(message);
  WiFiClient client;    
  HTTPClient http;
  http.begin(client, url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  
  // Send HTTP POST request
  int httpResponseCode = http.POST(url);
  if (httpResponseCode == 200){
    Serial.print("Message sent successfully");
  }
  else{
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}

/**
 * CallMeBot Telegram Group Messages.
 * @param apiKey "apiKey"
 * @param message "textmessage"
 * @returns apiKey : https://www.callmebot.com/blog/telegram-group-messages-api-easy/
 */
void Telegramgroup(String apiKey, String message) {
  // Data to send with HTTP POST
  String url = "https://api.callmebot.com/telegram/group.php?apikey=" + apiKey + "&text=" + message;
  WiFiClient client;    
  HTTPClient http;
  http.begin(client, url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  
  // Send HTTP POST request
  int httpResponseCode = http.POST(url);
  if (httpResponseCode == 200){
    Serial.print("Message sent successfully");
  }
  else{
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}

/**
 * CallMeBot Telegram Group Messages.
 * @param apiKey "apiKey"
 * @param message "textmessage"
 * @returns apiKey : https://www.callmebot.com/blog/telegram-group-messages-api-easy/
 */
// apiKey : https://www.callmebot.com/blog/telegram-group-messages-api-easy/
// html_format : yes/no -  Default: no - Optional parameter to send the message in html format or plain text. Put "yes" when you want to send "bold" text using test (url example: &html=yes)
// link_preview : yes/no - Default: no - It will enable or disable the webpage preview that is sent together with the text message when there is an URL on it.
void Telegramgroup(String apiKey, String message, String html_format) {
  // Data to send with HTTP POST
  String url = "https://api.callmebot.com/telegram/group.php?apikey=" + apiKey + "&text=" + message + "&html=" + html_format;
  WiFiClient client;    
  HTTPClient http;
  http.begin(client, url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  
  // Send HTTP POST request
  int httpResponseCode = http.POST(url);
  if (httpResponseCode == 200){
    Serial.print("Message sent successfully");
  }
  else{
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}

/**
 * CallMeBot Teelegram Call.
 * @param username username/phone.
 * @param text "textmessage".
 * @return phone: Indonesia +62, Example: "+62897461238"
 */
void Telegramcall(String username, String text) {
  // Data to send with HTTP POST
  String url = "http://api.callmebot.com/start.php?user=" + username + "&text=" + text;
  WiFiClient client;    
  HTTPClient http;
  http.begin(client, url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  
  // Send HTTP POST request
  int httpResponseCode = http.POST(url);
  if (httpResponseCode == 200){
    Serial.print("Call " + username);
  }
  else{
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}

void Telegramcall(String username, String text, String language, String repeat, String textcarbon, String timeout) {
  // Data to send with HTTP POST
  String url = "http://api.callmebot.com/start.php?user=" + username + "&text=" + text + "&lang=" + language + "&rpt=" + repeat + "&cc=" + textcarbon + "&timeout=" + timeout;
  WiFiClient client;    
  HTTPClient http;
  http.begin(client, url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  
  // Send HTTP POST request
  int httpResponseCode = http.POST(url);
  if (httpResponseCode == 200){
    Serial.print("Call " + username);
  }
  else{
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}

/**
 * CallMeBot WhatsApp Messages.
 * @param username "username"
 * @param apiKey "apiKey".
 * @param message "textmessage"
 * @returns apiKey : https://www.callmebot.com/blog/telegram-text-messages/
 */
void Telegrammessage(String username, String apiKey, String message) {
  // Data to send with HTTP POST
  String url = "https://api.callmebot.com/text.php?user=" + username + "&apikey=" + apiKey + "&text=" + urlEncode(message);
  WiFiClient client;    
  HTTPClient http;
  http.begin(client, url);

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  
  // Send HTTP POST request
  int httpResponseCode = http.POST(url);
  if (httpResponseCode == 200){
    Serial.print("Message sent successfully");
  }
  else{
    Serial.println("Error sending the message");
    Serial.print("HTTP response code: ");
    Serial.println(httpResponseCode);
  }

  // Free resources
  http.end();
}