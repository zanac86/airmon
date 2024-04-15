#include <Arduino.h>

#include "msxfont.h"

#include "SPI.h"
#include "TFT_eSPI.h"
#include "Free_Fonts.h"

#include "airdisplay.h"

#include "sensorsdata.h"
#include "sensorsreader.h"

void update_sensors()
{
  SENSORS_SCAN s;
  read_sensors_scan(&s);
  append_measure_to_history(s);
}

void setup(void)
{
  Serial.begin(9600);
  // while (!Serial)
  //   ; // time to get serial running
  delay(350);
  init_display();

  delay(250);
  init_sensors_reader();
  init_history();
}

void loop()
{
  update_sensors();
  draw_display();

  delay(2000);
}
