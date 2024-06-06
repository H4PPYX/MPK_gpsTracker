#pragma once
#include <string>
#include "config.h"

class Connection {
  public:
    virtual bool send(std::string data) = 0;
};
