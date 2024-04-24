#include "config.h"
#include "gps.h"
#include <iostream>

int main() {
  Config conf;
  GPS track;
  track.updateGPSdata();
  std::cout<<track.getGPSdata()<<std::endl;
  std::cout<<conf.getVehID()<<";"<<conf.getServIP()<<std::endl;
  return 0;
}
