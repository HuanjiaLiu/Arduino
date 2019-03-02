
#include"fishtank.h"
#include"Arduino.h"
#include"math.h"




fishtank::finshtank(byte pin,float R)
{
    rth_pin = pin;
    Ri = R;
}   


void fishtank::printtest()
{
    Serial.println();
    
}

float fishtank::temp_rth_get()
{
  int bit_voltage = analogRead(rth_pin);
  float real_voltage = 0.0049*rth_pin;
  float Rth_value = ((5/2.5-real_voltage)-1)*Ri;
  return Rth_value;
}

float fishtank::temp_value_cal(float value)
{
    float temputrue = pow((R_A+R_B*log(value/Ref)+R_C*pow(log(value/Ref),2)+R_D*pow(log(value/Ref),3)),-1);
    return temputrue;
}

void fishtank::rth_parameter(float A, float B, float C, float D, float value, float ref)
{
    R_A = A;
    R_B = B;
    R_C = C;
    R_D = D;
    R_Bvalue = value;
    Ref = ref;
}
