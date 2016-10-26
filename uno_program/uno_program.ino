#include <ArduinoJson.h>
#include "solar.h" //connected to A0
#include "air.h" //connected to A1
#include "water.h" //connected to A2
#include "earth.h" //connected to A3 
#include "json.h"

int air = 0, solar = 0, earth = 0, water = 0;


void setup() {
  set_led();
  set_pump();

  Serial.begin(9600);
}


void loop() {
  set_pump();
  for (int i = 2; i <= 5; i++)// set pin 2 - 5 to 0
  {
    digitalWrite(i, 0);
  }

  solar = nb_solar();
  water = nb_filter();
  air = nb_tree();
  earth = nb_earth1();
  light_led(solar);
  start_waterpump();
  json_message(solar, water, air, earth);
}
