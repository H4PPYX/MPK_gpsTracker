#include "gps.h"

GPS::GPS(){}
GPS::~GPS(){}
//std::string GPS::gps_lat;
//std::string GPS::gps_lon;
//std::string GPS::time;

std::string GPS::getGPSdata(){
  return GPS::gps_lat + ";" + GPS::gps_lon + ";" + GPS::time;
}

void GPS::fetchTime(std::string gpsTime){
  GPS::time = ("" + gpsTime.substr(0,3) + "-" + gpsTime.substr(4,5) + "-" + gpsTime.substr(6,7) + " " + gpsTime.substr(8,9) + ":" + gpsTime.substr(10,11) + ":" + gpsTime.substr(12,13));
  return;
}

void GPS::updateGPSdata() {
  GPS::gps_lat = "0";
  GPS::gps_lon = "0";
  GPS::fetchTime("20240424182716");
  return;
}
