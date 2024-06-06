#include "connection.h"

class WiFiSend : public Connection {
  public:
    WiFiSend(Config data);
    ~WiFiSend();
    bool send(std::string line);
  protected:
    Config &initials;
};
