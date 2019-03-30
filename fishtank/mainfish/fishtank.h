
#define _FISHTANK_H__

#include"Arduino.h"


class fishtank
{
    private:
        int rth_pin;
        int Ri;

        //Thermisotro parameter
        float R_A;
        float R_B;
        float R_C;
        float R_D;
        float R_Bvalue;
        float Ref;
        //WIFI parameter
        int port;
        char ip;


    public:
        finshtank(byte pin,float R);
        void printtest();

        //Thermistor part
        float temp_rth_get();                                 //get voltage from circuit
        float temp_value_cal(float value);                    //Use fumula transforming voltage to resistor value 
        void rth_parameter(float A, float B, float C, float D, float value, float ref);                      //Setting themistor parameter at first.

        //wifi part(UDP)
        void wifi_parameter(char ssid,char psw);
        void wifi_send(char words);
        void wifi_receive();

        //feeding part


        //heating part


        //cycling part




        
};
