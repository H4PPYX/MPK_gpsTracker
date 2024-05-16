#include "gps.h"
#include "arduPi.h"
#include "sim7x00.h"

GPS::GPS(sim7x00 device): sim7000(device) {
    GPS::sim7000.Power_On();
}
GPS::~GPS(){}
//std::string GPS::gps_lat;
//std::string GPS::gps_lon;
//std::string GPS::time;

std::string GPS::getGPSdata(){
  return GPS::gps_lat + ";" + GPS::gps_lon + ";" + GPS::time;
}

void GPS::fetchTime(std::string gpsTime){
  GPS::time = ("" + gpsTime.substr(4,4) + "-" + gpsTime.substr(8,2) + "-" + gpsTime.substr(10,2) + " " + gpsTime.substr(12,2) + ":" + gpsTime.substr(14,2) + ":" + gpsTime.substr(16,2));
  return;
}

void GPS::updateGPSdata() {

////////////////////////////////////////////////////////////////////////////////


        GPS::sim7000.Send_AT_Command("AT+CGNSPWR=1",2000,"OK");
        char answer = 0;
        char x = 0;
        char gps_buffer[200];
        memset(gps_buffer,'\0',200);
        delay(2000);
        while(answer == 0) {

          GPS::sim7000.Send_AT_Command("AT+CGNSINF",2000,"+CGNSINF: ");
          while(Serial.available()==0);

          do {

            if(Serial.available()>0)
              gps_buffer[x++] = Serial.read();

            if(strstr(gps_buffer,"OK") != NULL) {

              if(strstr(gps_buffer,",,,,,") == NULL) {

                gps_buffer[x]='\0';
                answer = 1;

              } else {

                memset(gps_buffer,'\0',x);
                x = 0;
                delay(2000);

              }

            }

          } while((answer == 0)&&(x > 0));

        }

        GPS::sim7000.Send_AT_Command("AT+CGNSPWR=0",2000,"OK");


////////////////////////////////////////////////////////////////////////////////

  GPS::gps_lat = "0.000000";
  GPS::gps_lon = "0.000000";
  GPS::fetchTime(gps_buffer);
  return;
}

/*

1,0,,,,,,,0,,,,,,21,,,,,36,,

OK
The GPS position message is not correct,please waiting...
The GPS position message is:
1,1,20240515124136.000,51.117769,17.030160,116.900,0.00,318.4,1,,1.1,,,,21,5,,,,36,,

OK
UTC time is :20240515124136
Latitude is :51.117769
Longitude is :17.030160,
Turn off the GNSS power.
^C


*/
