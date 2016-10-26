#include "Arduino.h"
int e1_number = 0, e2_number = 0, e3_number = 0, e4_number = 0, e5_number = 0;

// read earth components
int nb_earth1() {
  int e1 = analogRead(A3);
  if (e1 < 1000)
    e1_number = 1000 / e1;
  else e1_number = 0;
  return e1_number;
}




