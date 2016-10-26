#include "Arduino.h"
int a_number=0;

// read air components
int nb_tree(){
int a=analogRead(A1); // air readings to A5
  if (a < 1000)
  a_number=1000/a;
  else a_number=0;
return a_number;}

