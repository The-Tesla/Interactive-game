#include "arduino.h"
int f_number=0, start_time = 0, pump_started = 0;

// read filters 
int nb_filter(){
int s=analogRead(A2);
  if (s < 1000)
  f_number=1000/s;
  else f_number=0;
return f_number;}

int set_pump(){
pinMode(A9,OUTPUT);
digitalWrite(A9,1);
}

void start_waterpump(int detect) {
  if (detect >= 2 && pump_started == 0) {
    start_time = millis();
    pump_started = 1;
  }
  else if (detect >= 2 &&  millis() - start_time < 1500)
  {
    digitalWrite(A9, 0);
  }
  else digitalWrite(A9, 1);
}

