#include "wifiSend.h"

WiFiSend::WiFiSend(Config data): initials(data){
  WiFiSend::send("start;3_00099876");
}

WiFiSend::~WiFiSend(){}

bool WiFiSend::send(std::string line) {
    system(("curl --header \"Content-Type: text/plain\" --request POST --data \"" + initials.getVehID() + ";" + line + "\" http://" + initials.getServIP() + "/vehiclepositions").c_str());
  return 1;
}
