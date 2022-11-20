#ifndef Callmebot_ESP8266_h
#define Callmebot_ESP8266_h

#include "Arduino.h"

void whatsappMessage(String phoneNumber, String apiKey, String message);
void facebookMessage(String apiKey, String message);
void telegramMessage(String username, String apiKey, String message);
void telegramGroup(String apiKey, String message);
void telegramGroup(String apiKey, String message, String html_format);
void telegramCall(String username, String Text);
void telegramCall(String username, String Text, String language);
void telegramCall(String username, String Text, String repeat);
void telegramCall(String username, String Text, String textcarbon);
void telegramCall(String username, String Text, String timeout);
void telegramCall(String username, String Text, String language, String repeat);
void telegramCall(String username, String Text, String language, String textcarbon);
void telegramCall(String username, String Text, String language, String timeout);
void telegramCall(String username, String Text, String language, String repeat, String textcarbon);
void telegramCall(String username, String Text, String language, String repeat, String textcarbon, String timeout);

#endif