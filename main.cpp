#include "gps.h"
#include "wifiSend.h"
#include "connection.h"
#include <iostream>
#include <fstream>


int main() {

  Config conf;
  sim7x00 sim7000 = sim7x00();
  GPS track(sim7000);
  WiFiSend sender(sim7000, conf);
  std::ofstream file;
  file.open("output.txt", std::ios_base::app);

  while(true){
    track.updateGPSdata();
    std::string temp = track.getGPSdata();
    std::cout<<temp<<std::endl;
    sender.send(temp);
    //file<<track.getGPSdata()<<std::endl;
    //std::cout<<conf.getVehID()<<";"<<conf.getServIP()<<std::endl;
    delay(1000);
  }

  file.close();
  return 0;
}
