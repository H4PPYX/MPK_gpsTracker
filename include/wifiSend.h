#include "connection.h"

class WiFiSend : public Connection {
  public:
    Connection(sim7x00 device, Config data);
    ~Connection();
    bool send(std::string data);
  protected:
    sim7x00 &sim7000;
    Config &initials;
}
