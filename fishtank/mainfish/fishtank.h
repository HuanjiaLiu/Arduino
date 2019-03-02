
#define _FISHTANK_H__

#include"Arduino.h"


class fishtank
{
    private:
        byte rth_pin;
        float Ri;
        float R_A;
        float R_B;
        float R_C;
        float R_D;
        float R_Bvalue;
        float Ref;



    public:
        finshtank(byte pin,float R);
        void printtest();
        float temp_rth_get();
        float temp_value_cal(float value);
        void rth_parameter(float A, float B, float C, float D, float value, float ref);
};
