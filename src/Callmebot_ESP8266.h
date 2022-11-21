#ifndef Callmebot_ESP8266_h
#define Callmebot_ESP8266_h

#include "Arduino.h"

void whatsappMessage(String phoneNumber, String apiKey, String message);
void facebookMessage(String apiKey, String message);
void telegramMessage(String username, String apiKey, String message);
void telegramGroup(String apiKey, String message);
void telegramGroup(String apiKey, String message, String html_format);
void telegramCall(String username, String message);
void telegramCall(String username, String message, String language);
void telegramCall(String username, String message, String language, String repeat);
void telegramCall(String username, String message, String language, String textcarbon);
void telegramCall(String username, String message, String language, String timeout);
void telegramCall(String username, String message, String language, String repeat, String textcarbon);
void telegramCall(String username, String message, String language, String repeat, String timeout);
void telegramCall(String username, String message, String language, String repeat, String textcarbon, String timeout);
void telegramCall(String username, String message, String repeat, String, String textcarbon);
void telegramCall(String username, String message, String repeat, String, String timeout);
void telegramCall(String username, String message, String repeat, String, String textcarbon, String timeout);
void telegramCall(String username, String message, String textcarbon);
void telegramCall(String username, String message, String textcarbon, String timeout);
void telegramCall(String username, String message, String timeout);

#endif