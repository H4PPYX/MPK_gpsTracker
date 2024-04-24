#include "config.h"
#include <iostream>
#include <fstream>

std::string Config::serv_ip;
std::string Config::veh_id;

Config::Config() {
  std::ifstream ifile("config.txt");
  std::string confline;
  getline(ifile, confline);
  int delimiterPos = confline.find(';');
  Config::serv_ip = confline.substr(0, delimiterPos);
  confline.erase(0, delimiterPos+1);
  Config::veh_id = confline;
  ifile.close();
  return;
}

std::string Config::getServIP(){
  return Config::serv_ip;
}

std::string Config::getVehID(){
  return Config::veh_id;
}

Config::~Config() {}
