// #include <InvertedTM1638.h>
// #include <TM1638.h>
// #include <TM1638QYF.h>
// #include <TM1640.h>
// #include <TM16XX.h>
// #include <TM16XXFonts.h>

// TM1638 aa(D2,D1,D0);

// void setup() {
//   aa.setLEDs(0xDD);
//   aa.setDisplayToDecNumber(273,0);
// }

// void loop() {

// }

#include<ESP8266WiFi.h>
#include <ESP8266Wedserver.h>
#include <TM1638.h>

//soft AP
const char* ssid="김종서";
const char*  password='12341234';

TM1638 aa(D2,D1,D0)
ESP8266WebServer server(80);


void setup() {

}

void loop() {

}
