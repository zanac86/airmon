#ifndef AIRDISPLAY_H
#define AIRDISPLAY_H

#include <Arduino.h>
#include "sensorsdata.h"

void init_display();
void draw_display();



void draw_frames();
void draw_labels(SENSORS_SCAN *scan);

uint16_t get_sesnsor_color(const SENSOR_TYPE& s);

// void draw_test1();
// void draw_test2();
// void draw_test3();

#endif
