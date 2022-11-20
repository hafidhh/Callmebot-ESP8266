#ifndef Callmebot_ESP8266_h
#define Callmebot_ESP8266_h

#include "Arduino.h"

void Whatsapp(String phoneNumber, String apiKey, String message);
void Facebook(String apiKey, String message);
void Telegrammessage(String username, String apiKey, String message);
void Telegramgroup(String apiKey, String message);
void Telegramgroup(String apiKey, String message, String html_format);
void Telegramcall(String username, String Text);
void Telegramcall(String username, String Text, String language);
void Telegramcall(String username, String Text, String repeat);
void Telegramcall(String username, String Text, String textcarbon);
void Telegramcall(String username, String Text, String timeout);
void Telegramcall(String username, String Text, String language, String repeat);
void Telegramcall(String username, String Text, String language, String textcarbon);
void Telegramcall(String username, String Text, String language, String timeout);
void Telegramcall(String username, String Text, String language, String repeat, String textcarbon);
void Telegramcall(String username, String Text, String language, String repeat, String textcarbon, String timeout);

#endif