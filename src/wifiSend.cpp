#include "wifiSend.h"

WiFiSend::WiFiSend(sim7x00 device, Config data): sim7000(device), initials(data){
  WiFiSend::send("start;3_00099876");
}

WiFiSend::~WiFiSend(){
  WiFiSend::send("stop;3_00099876");
}

bool WiFiSend::send(std::string line) {
    system(("curl --header \"Content-Type: text/plain\" --request POST --data \"" + initials.getVehID() + ";" + line + "\" http://" + initials.getServIP() + "/vehiclepositions").c_str());
  return 1;
}
