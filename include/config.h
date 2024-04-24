#include <string>

class Config {
  public:
    Config();
    ~Config();
    std::string getServIP() static;
    std::string getVehID() static;
  private:
    std::string serv_ip;
    std::string veh_id;
};
