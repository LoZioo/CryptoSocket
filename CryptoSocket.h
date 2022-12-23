/**
 * @file crypto_socket.h
 * @author Davide Scalisi
 * @brief Lightweight ESP8266 TCP socket payload symmetric crypto lib
 * 				based on https://github.com/rweather/arduinolibs crypto lib
 * 				and on the standard WiFiServer socket object.
 * 
 * @version 0.1
 * @date 2022-12-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Arduino.h>
#include <ESP8266WiFi.h>

#include <AES.h>
#include <SHA256.h>

class CryptoSocket{
	private:
		WiFiServer *server;

	public:
		CryptoSocket(uint8_t port);
		~CryptoSocket();
};
