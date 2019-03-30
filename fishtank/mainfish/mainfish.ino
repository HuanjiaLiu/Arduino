#include"fishtank.h"
#include"math.h"

fishtank mytank(5);
void setup() {
  // put your setup code here, to run once:
    //mytank.rth_parameter();
    Serial.begin(9600);
    mytank.rth_parameter(3.354016*pow(10,-3),2.56985*pow(10,-4),2.620131*pow(10,-6),6.383091*pow(10,-8),3977,10000);
}

void loop() {
  // put your main code here, to run repeatedly:
    mytank.printtest();


}
