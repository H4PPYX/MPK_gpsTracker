#include "config.h"
#include "gps.h"
#include <iostream>
#include <fstream>


int main() {

  Config conf;
  sim7x00 sim7000 = sim7x00();
  GPS track(sim7000);
  std::ofstream file;
  file.open("output.txt", std::ios_base::app);

  while(true){
    track.updateGPSdata();
    std::string dataline = track.getGPSdata();
    std::cout<<dataline<<std::endl;
    file<<dataline<<std::endl;
    //std::cout<<conf.getVehID()<<";"<<conf.getServIP()<<std::endl;
    delay(1000);
  }
  file.close();
  return 0;
}
