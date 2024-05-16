#include <string>
#include "arduPi.h"
#include "sim7x00.h"

class GPS {
  public:
    GPS(sim7x00 device): GPS::sim7000(device) ;
    ~GPS();
    std::string getGPSdata();
    void updateGPSdata();
  private:
    sim7x00 &sim7000;
    std::string gps_lon;
    std::string gps_lat;
    std::string time;
    void fetchTime(std::string gpsTime);
};
