#include "Arduino.h"
int e1_number=0,e2_number=0,e3_number=0,e4_number=0,e5_number=0;

// read earth components
int nb_earth1(){
int e1=analogRead(A3); 
  if (e1 < 1000)
  e1_number=1000/e1;
  else e1_number=0;
return e1_number;}

int nb_earth2(){
int e2=analogRead(A4); 
  if (e2 < 1000)
  e2_number=1000/e2;
  else e2_number=0;
return e2_number;}

int nb_earth3(){
int e3=analogRead(A5); 
  if (e3 < 1000)
  e3_number=1000/e3;
  else e3_number=0;
return e3_number;}

int nb_earth4(){
int e4=analogRead(A6); 
  if (e4 < 1000)
  e4_number=1000/e4;
  else e4_number=0;
return e4_number;}

int nb_earth5(){
int e5=analogRead(A7); 
  if (e5 < 1000)
  e5_number=1000/e5;
  else e5_number=0;
return e5_number;}




