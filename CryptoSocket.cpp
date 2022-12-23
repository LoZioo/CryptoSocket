#include <CryptoSocket.h>

CryptoSocket::CryptoSocket(uint8_t port){
	server = new WiFiServer(port);
}

CryptoSocket::~CryptoSocket(){
	server->close();
	delete server;
}
