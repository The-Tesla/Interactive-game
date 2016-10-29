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
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
digitalWrite(2,1);
digitalWrite(3,1);
}

void start_waterpump(int detect) {
  if (detect >= 2 && pump_started == 0) {
    start_time = millis();
    pump_started = 1;
  }
  else if (detect >= 2 &&  millis() - start_time < 1500)
  {
    digitalWrite(6, 0);
  }
  else digitalWrite(6, 1);
}

int start_airpump(){
if (nb_filter()==2)
digitalWrite(3,0);
}

