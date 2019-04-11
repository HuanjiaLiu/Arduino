#include "fishtank.h"
#include "math.h"
#include "ESP8266WiFi.h"
#include "WiFiUdp.h"



WiFiUDP Udp;
fishtank mytank(A0,10000);
float rth_value;
float temp;
const char* ssid = "loserleo";
const char* password = "12345678";
char replyPacket[10]; 
void setup() {
  // put your setup code here, to run once:
    //mytank.rth_parameter();
    Serial.begin(115200);
    mytank.rth_parameter(3.354016*pow(10,-3),2.56985*pow(10,-4),2.620131*pow(10,-6),6.383091*pow(10,-8),3977,10000);
    mytank.wifi_connect(ssid,password);
}

void loop() {
  // put your main code here, to run repeatedly:
    //mytank.printtest();
    rth_value = mytank.temp_rth_get();
    //Serial.println(analogRead(A0));
    //Serial.println(rth_value);
    //Serial.println(mytank.temp_value_cal(rth_value));
    Udp.beginPacket("loserleo.com",8030);
    temp = mytank.temp_value_cal(rth_value);
    dtostrf(temp,6,2,replyPacket);
    Udp.write(replyPacket);
    Serial.println(replyPacket);
    Udp.endPacket();
    delay(3000);
    

}
