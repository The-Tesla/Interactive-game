#include "Arduino.h"
int s_number = 0;

//initialize led
void set_led() {
  // set pin 2 to 5 as output
  for (int i = 2; i <= 5; i++) {
    pinMode(i, 1);
  }
}


// read solar pannels
int nb_solar() {
  int s = analogRead(A0);
  if (s < 1000)
    s_number = 1000 / s;
  else s_number = 0;
  return s_number;
}


// light the leds
void light_led(int l_number) {
  for (int i = 0; i <= l_number; i++)
  {
    digitalWrite(i + 2, 1);
  }
}


