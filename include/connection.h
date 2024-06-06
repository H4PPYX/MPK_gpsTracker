#include <string>
#include "arduPi.h"


class Connection {
  public:
    virtual bool send(std::string data) = 0;
  protected:
    sim7x00 &sim7000;
    Config &initials;
};
