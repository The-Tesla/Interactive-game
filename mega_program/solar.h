#include "Arduino.h"
int s_number=0;

//initialize led
void set_led(){
// set pin 14 to 21 as output 
for (int i=2;i<=21;i++){
pinMode(i,1);}
pinMode(A8,1);
}


// read solar pannels 
int nb_solar(){
int s=analogRead(A0);
  if (s < 1000)
  s_number=1000/s;
  else s_number=0;
return s_number;}


// light the leds
void light_led(int l_number){
if(l_number<=21){
for (int i=0;i<=l_number;i++)
{digitalWrite(i+2,1);}}
else digitalWrite(A8,1);
}


