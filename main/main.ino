
#include "solar.h" //connected to A0
#include "air.h" //connected to A1
#include "water.h" //connected to A2
#include "earth.h" //connected to A3 A4 A5 A6 A7
int num[2]={0};// storing digits values
int air=0,solar=0,earth=0,water=0;


void setup(){
set_led();

Serial.begin(9600);
}


void loop(){
set_pump();
PORTA=B00000000;// set 22 to 29 
PORTC=B00000000;// set pin 30 to 37                    
PORTG=B00000000;// set pin 37 to
PORTL=B00000000;//    50 to 0
solar=nb_solar();
water=nb_filter();
air=nb_tree();
light_led(solar);
start_waterpump();

Serial.print("solar : ");Serial.print(solar);Serial.println(" ");
Serial.print("air : ");Serial.print(air);Serial.println(" ");
Serial.print("water : ");Serial.print(water);Serial.println(" ");



}
