#include "config.h"
#include <iostream>
#include <fstream>

Config::Config() {
  std::ifstream ifile("config.txt");
  std::string confline;
  getline(ifile, confline);
  int delimiterPos = confline.find(';');
  serv_ip = confline.substr(0, delimiterPos);
  confline.erase(0, delimiterPos+1);
  veh_id = confline;
  ifile.close();
  return;
}

std::string Config::getServIP(){
  return serv_ip;
}

std::string Config::getVehID(){
  return veh_id;
}
