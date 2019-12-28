#include "Server.h"
#include "Client.h"
#include <pthread.h>
#include <iostream>

static void * Server(void * arg){
    class Server* s = new class Server();
    s->run();
}

static void * Client(void * arg){
    class Client* c = new class Client();
    c->run();
}
using namespace std;

int main() {
    pthread_t server,client;
    pthread_create(&server,0,&Server,0);
    pthread_create(&client,0,&Client,0);
    pthread_join(server, 0);
    pthread_join(client, 0);
    return 0;
}