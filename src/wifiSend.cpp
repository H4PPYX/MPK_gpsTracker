#include "WiFiSend.h"


WiFiSend::WiFiSend(sim7x00 device, Config data): sim7000(device), initials(data){}


bool WiFiSend::send(std::string line) {
    system(("curl --header \"Content-Type: text/plain\" --request POST --data \"" + conf.getVehID() + ";" + line + "\" http://" + initials.getServIP() + "/vehiclepositions").c_str());
  return 1;
}
