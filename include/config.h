#pragma once
#include <string>

class Config {
  public:
    Config();
    ~Config();
    static std::string getServIP();
    static std::string getVehID();
  private:
    static std::string serv_ip;
    static std::string veh_id;
};
