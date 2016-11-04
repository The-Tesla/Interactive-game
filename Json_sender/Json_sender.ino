#include <ArduinoJson.h>
#include "json.h"
int air = 0, solar = 0, earth1 = 0, earth2 = 0, earth3 = 0, water = 0, time = 0;


void setup() {

  Serial.begin(9600);
}


void loop() {
  // comment/uncomment the element you want to test 

  for (int i = 0; i < 10; i++) { // test air
    air = i; solar = 0; earth1 = 0; earth2 = 0; earth3 = 0; water = 0;
    json_message(solar, air, water, earth1, earth2, earth3);
    delay(1000);
  }

  for (int i = 0; i < 10; i++) { //test solar
    air = 0; solar = i; earth1 = 0; earth2 = 0; earth3 = 0; water = 0;
    json_message(solar, air, water, earth1, earth2, earth3);
    delay(1000);
  }

  for (int i = 0; i < 10; i++) { // test earth1
    air = 0; solar = 0; earth1 = i; earth2 = 0; earth3 = 0; water = 0;
    json_message(solar, air, water, earth1, earth2, earth3);
    delay(1000);
  }

  for (int i = 0; i < 10; i++) { // test earth2
    air = 0; solar = 0; earth1 = 0; earth2 = i; earth3 = 0; water = 0;
    json_message(solar, air, water, earth1, earth2, earth3);
    delay(1000);
  }


  for (int i = 0; i < 10; i++) { // test earth3
    air = 0; solar = 0; earth1 = 0; earth2 = 0; earth3 = i; water = 0;
    json_message(solar, air, water, earth1, earth2, earth3);
    delay(1000);
  }

  for (int i = 0; i < 10; i++) { // test water
    air = 0; solar = 0; earth1 = 0; earth2 = 0; earth3 = 0; water = i;
    json_message(solar, air, water, earth1, earth2, earth3);
    delay(1000);
  }

}
