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
  GPS::time = ("" + gpsTime.substr(0,4) + "-" + gpsTime.substr(4,2) + "-" + gpsTime.substr(6,2) + " " + gpsTime.substr(8,2) + ":" + gpsTime.substr(10,2) + ":" + gpsTime.substr(12,2));
  return;
}

void GPS::updateGPSdata() {
  GPS::gps_lat = "0.000000";
  GPS::gps_lon = "0.000000";
  GPS::fetchTime("20240424182716");
  return;
}
