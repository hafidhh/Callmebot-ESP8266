/**
 * @file Callmebot_ESP8266.h
 * @author Hafidh Hidayat (hafidhhidayat@hotmail.com)
 * @brief 
 * 
 * @copyright Copyright (c) 2022
 * 
 * Github :
 * https://github.com/hafidhh
 * https://github.com/hafidhh/Callmebot-ESP8266
 */

#ifndef Callmebot_ESP8266_h
#define Callmebot_ESP8266_h

#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <UrlEncode.h>
#include <certs.h>
#include <WiFiClientSecure.h>
#include <ESP8266HTTPClient.h>

class Callmebot_ESP8266
{
private:
    const char* host = "https://api.callmebot.com";
    const uint16_t port = 443;
    bool httpStatus;
    int httpResponseCode;
    void clock();
    void callmebothttps(String url);
    String errorToString(int error);
public:
    void begin();
    void whatsappMessage(String phoneNumber, String apiKey, String message);
    void facebookMessage(String apiKey, String message);
    void telegramMessage(String username, String message);
    void telegramGroup(String apiKey, String message, bool html_format = false);
    void telegramCall(String username, String message, String language = "en-US-Neural2-J", unsigned long repeat = 2, String textcarbon = "yes", unsigned long timeout = 30);
    void telegramCallMp3(String username, String mp3link);
    String debug();
};

extern Callmebot_ESP8266 Callmebot;

#endif