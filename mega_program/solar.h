#include "Arduino.h"
int s_number=0;

//initialize led
void set_led(){
DDRA=B11111111; // set 22 to 29 as outputs
DDRC=B11111111; // set pin 30 to 37 as outputs 
// set pin 37 to 50 as output 
DDRG=B11111111;
DDRL=B11111111;
// set pin 14 to 21 as output 
for (int i=14;i<=21;i++){
pinMode(i,1);}
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
if(l_number<=49){
for (int i=0;i<=l_number;i++)
{digitalWrite(i+21,1);}}}


