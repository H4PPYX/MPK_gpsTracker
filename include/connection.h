#include <string>
#include "arduPi.h"
#include "sim7x00.h"
#include "config.h"

class Connection {
  public:
    virtual bool send(std::string data) = 0;
  protected:
    sim7x00 &sim7000;
    Config &initials;
};
