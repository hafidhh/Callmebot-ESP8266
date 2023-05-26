/**
 * @file Callmebot_ESP8266.cpp
 * @author Hafidh Hidayat (hafidhhidayat@hotmail.com)
 * @brief 
 * 
 * @copyright Copyright (c) 2022
 * 
 * Github :
 * https://github.com/hafidhh
 * https://github.com/hafidhh/Callmebot-ESP8266
 */

#include "Callmebot_ESP8266.h"

/**
 * @brief http client
 * 
 * @param url url callmebot
 */
void callmebothttp(String url)
{
	// Data to send with HTTP POST
	WiFiClient client;    
	HTTPClient http;
	http.begin(client, url);

	// Specify content-type header
	http.addHeader("Content-Type", "application/x-www-form-urlencoded");
	
	// Send HTTP POST request
	int httpResponseCode = http.POST(url);
	if (httpResponseCode == 200)
	{
		Serial.print("Message sent successfully");
	}
	else
	{
		Serial.println("Error sending the message");
		Serial.print("HTTP response code: ");
		Serial.println(httpResponseCode);
	}

	http.end();
}

/**
 * CallMeBot WhatsApp Messages
 * @param phoneNumber Indonesia +62, Example: "+62897461238"
 * @param apiKey "apiKey", to get apiKey : https://www.callmebot.com/blog/telegram-group-messages-api-easy/
 * @param message "textmessage"
 */
void whatsappMessage(String phoneNumber, String apiKey, String message)
{
	String url = "http://api.callmebot.com/whatsapp.php?phone=" + phoneNumber + "&apikey=" + apiKey + "&text=" + urlEncode(message);
	
	callmebothttp(url);
}

/**
 * CallMeBot Facebook Messages.
 * @param apiKey "apiKey", to get apiKey : https://www.callmebot.com/blog/telegram-group-messages-api-easy/
 * @param message "textmessage"
 */
void facebookMessage(String apiKey, String message)
{
	String url = "http://api.callmebot.com/facebook/send.php?apikey=" + apiKey + "&text=" + urlEncode(message);

	callmebothttp(url);
}

/**
 * CallMeBot WhatsApp Messages.
 * @param username "username"
 * @param message "textmessage"
 */
void telegramMessage(String username, String message)
{
	String url = "http://api.callmebot.com/text.php?user=" + username + "&text=" + urlEncode(message);

	callmebothttp(url);
}

/**
 * @brief CallMeBot Telegram Group Messages.
 * 
 * @param apiKey "apiKey", to get apiKey : https://www.callmebot.com/blog/telegram-group-messages-api-easy/
 * @param message "textmessage"
 * @param html_format true/false. default = false. true if you want bold text
 */
void telegramGroup(String apiKey, String message, bool html_format)
{
	String html = "no";
	
	if (html_format = true)
	{
		html = "yes";
	}

	String url = "http://api.callmebot.com/telegram/group.php?apikey=" + apiKey + "&text=" + urlEncode(message) + "&html=" + html;
	
	callmebothttp(url);
}

/**
 * @brief CallMeBot Teelegram Call.
 * 
 * @param username username/phone. phone: Indonesia +62, Example: "+62897461238"
 * @param message "textmessage".
 * @param language default = en-US-Neural2-J. if you want to change the voice, you can get voice name on https://cloud.google.com/text-to-speech/docs/voices
 * @param repeat default = 2.
 * @param textcarbon default "yes".
 * yes: To always send a copy of the text message together with the call (default).
 * no: To do not send a copy of the message as a Text Message.
 * missed: To only send a Text Message if the call is missed or rejected.
 * only: To only send a text message (only available on dedicated bots).
 * @param timeout default = 30.
 */
void telegramCall(String username, String message, String language, unsigned long repeat, String textcarbon, unsigned long timeout)
{
	String url = "http://api.callmebot.com/start.php?user=" + username + "&text=" + urlEncode(message) + "&lang=" + language + "&rpt=" + String(repeat) + "&cc=" + textcarbon + "&timeout=" + String(timeout);
	
	callmebothttp(url);
}