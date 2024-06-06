#include "connection.h"

class WiFiSend : public Connection {
  public:
    WiFiSend(sim7x00 device, Config data);
    ~WiFiSend();
    bool send(std::string line);
  protected:
    sim7x00 &sim7000;
    Config &initials;
}
