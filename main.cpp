#include "config.h"
#include "gps.h"
#include <iostream>
#include "arduPi.h"
#include "sim7x00.h"

int main() {
  Config conf;
  GPS track;


  sim7x00 sim7000 = sim7x00();
  sim7000.Power_On();
  sim7000.Send_AT_Command("ATI",2000);
  while( Serial.available() > 0) Serial.read();


  track.updateGPSdata();
  std::cout<<track.getGPSdata()<<std::endl;
  std::cout<<conf.getVehID()<<";"<<conf.getServIP()<<std::endl;
  return 0;
}
