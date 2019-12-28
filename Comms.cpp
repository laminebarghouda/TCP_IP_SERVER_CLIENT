#include "Comms.h"

string Comms::getInput(int i) {
    string msg;
    // Prompt  for some text
    if(i==0) {
        cout << "Server > ";
    }
    else{
        cout << "Client > ";
    }
    getline(cin, msg);
    return msg;
}