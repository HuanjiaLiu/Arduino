#include"fishtank.h"

fishtank mytank;
void setup() {
  // put your setup code here, to run once:
    //mytank.rth_parameter();
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    mytank.printtest();


}
