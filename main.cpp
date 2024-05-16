#include "config.h"
#include "gps.h"
#include <iostream>
#include <ofstream>


int main() {

  Config conf;
  sim7x00 sim7000 = sim7x00();
  GPS track(sim7000);
  ofstream file;
  file.open("output.txt");

  while(true){
    track.updateGPSdata();
    std::cout<<track.getGPSdata()<<std::endl;
    file<<track.getGPSdata()<<std::endl;
    //std::cout<<conf.getVehID()<<";"<<conf.getServIP()<<std::endl;
    delay(1000);
  }
  file.close();
  return 0;
}
