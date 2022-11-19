#ifndef Callmebot_ESP8266_h
#define Callmebot_ESP8266_h

#include "Arduino.h"

void Whatsapp(String phoneNumber, String apiKey, String message);
void Facebook(String apiKey, String message);
void Telegrammessage(String username, String apiKey, String message);
void Telegramcall(String username, String Text, String language, String repeat, String textcarbon, String timeout);
void Telegramgroup(String apiKey, String message, String html_format);

#endif