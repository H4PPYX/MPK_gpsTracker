#include "config.h"
#include "gps.h"
#include <iostream>


int main() {
  Config conf;


  sim7x00 sim7000 = sim7x00();/*
  sim7000.Power_On();
  sim7000.Send_AT_Command("ATI",2000);
  while( Serial.available() > 0) Serial.read();*/

  GPS track(sim7000);

  track.updateGPSdata();
  std::cout<<track.getGPSdata()<<std::endl;
  std::cout<<conf.getVehID()<<";"<<conf.getServIP()<<std::endl;
  return 0;
}
