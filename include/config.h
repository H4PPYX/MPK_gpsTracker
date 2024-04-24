#include <string>

class Config {
  public:
    Config();
    ~Config();
    static std::string getServIP();
    static std::string getVehID();
  private:
    std::string serv_ip;
    std::string veh_id;
};
