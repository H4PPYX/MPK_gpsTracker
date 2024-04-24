#include <string>

class GPS {
  public:
    GPS();
    ~GPS();
    std::string getGPSdata();
    void updateGPSdata();
  private:
    std::string gps_lon;
    std::string gps_lat;
    std::string time;
    void fetchTime(std::string gpsTime);
};
