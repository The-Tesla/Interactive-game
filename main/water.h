#include "arduino.h"
int f_number=0;

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

int start_waterpump(){
if (nb_filter()==2)
digitalWrite(2,0);
}

int start_airpump(){
if (nb_filter()==2)
digitalWrite(3,0);
}

//// detect if a filtering circuit is complete 
//boolean pump=LOW,lastpump=LOW;
//int detect(){
//  int f1=0,f2=0,f3=0,f4=0;
//  f1=nb_filter_1();
//  f2=nb_filter_2();
//  f3=nb_filter_3();
//  f4=nb_filter_4();
// if(f1==f2 && f1==f3 && f1==f4 && lastpump==LOW){
// pump=!pump;
// digitalWrite(13,pump); // connect the pump le pin 13 
// delay(500); 
// lastpump=HIGH;}
// else if(lastpump==HIGH) {pump=!pump;lastpump=LOW;}}

