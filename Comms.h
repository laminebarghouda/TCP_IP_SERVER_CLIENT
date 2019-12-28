#ifndef TCP_IP_SERVER_CLIENT_COMMS_H
#define TCP_IP_SERVER_CLIENT_COMMS_H

#define _WIN32_WINNT 0x0600
#include <iostream>
#include <WS2tcpip.h>
#include <string>

using namespace std;
class  Comms {

public:
    virtual void run() =0;
    string getInput(int i);
    const string ipAddress = "127.0.0.1";	// IP Address of the server
    const int port = 54000;	// Listening port # on the server
};


#endif //TCP_IP_SERVER_CLIENT_COMMS_H
