#include "config.h"
#include <iostream>
#include <fstream>

void Config::Config() {
  ifstream ifile("config.txt");
  std::string confline;
  getline(ifile, confline);
  int delimiterPos = confline.find(';');
  serv_ip = confline.substr(0, delimiterPos);
  confline.erase(0, delimiterPos+1);
  veh_id = confline;
  ifile.close();
  return;
}

std::string Config::getServIP() Static{
  return serv_ip;
}

std::string Config::getVehID() Static{
  return veh_id;
}
