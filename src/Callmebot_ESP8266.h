#ifndef Callmebot_ESP8266_h
#define Callmebot_ESP8266_h

#include "Arduino.h"

class Callmebot_ESP8266
{
    public:
    Callmebot_ESP8266(String username);
    void Whatsapp();
    void Facebook();
    void Telegrammessage(String apiKey, String message);
    void Telegramcall(String Text, String language, String repeat, String textcarbon, String timeout);
    void Telegramgroup();
    private:
    String _username;
};

#endif