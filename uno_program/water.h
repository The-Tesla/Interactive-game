#include "arduino.h"
int f_number = 0, start_time = 0, pump_started = 0;

// read filters
int nb_filter() {
  int s = analogRead(A2);
  if (s < 1000)
    f_number = 1000 / s;
  else f_number = 0;
  return f_number;
}

int set_pump() {
  pinMode(6, OUTPUT);
  digitalWrite(6, 1);
}

int start_waterpump() {
  if (nb_filter() == 2 && pump_started == 0) {
    start_time == millis();
    pump_started = 1;
  }
  if (nb_filter() == 2 && millis() - start_time < 1000)
    digitalWrite(6, 0);
}


