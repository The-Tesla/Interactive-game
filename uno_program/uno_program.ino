
#include "solar.h" //connected to A0
#include "air.h" //connected to A1
#include "water.h" //connected to A2
#include "earth.h" //connected to A3 
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
  light_led(solar);
  start_waterpump();

  Serial.print("solar : "); Serial.print(solar); Serial.println(" ");
  Serial.print("air : "); Serial.print(air); Serial.println(" ");
  Serial.print("water : "); Serial.print(water); Serial.println(" ");



}
