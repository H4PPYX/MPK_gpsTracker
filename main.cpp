#include "config.h"
#include <iostream>

int main() {
  Config conf();
  std::cout<<conf.getVehID()<<";"<<conf.getServIP()<<std::endl;
  return 0;
}
