
#define _FISHTANK_H__

#include"Arduino.h"


class fishtank
{
    private:
        byte rth_pin;
        float Ri;

        //Thermisotro parameter
        float R_A;
        float R_B;
        float R_C;
        float R_D;
        float R_Bvalue;
        float Ref;



    public:
        finshtank(byte pin,float R);
        void printtest();

        //Thermistor part
        float temp_rth_get();                                 //get voltage from circuit
        float temp_value_cal(float value);                    //Use fumula transforming voltage to resistor value 
        void rth_parameter(float A, float B, float C, float D, float value, float ref);                      //Setting themistor parameter at first.

        //wifi part(UDP)
        void wifi_parameter(char ssid,char psw);


        //feeding part


        //heating part


        //cycling part




        
};
