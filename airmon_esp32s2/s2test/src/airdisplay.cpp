#include <Arduino.h>

#include "msxfont.h"
#include "SPI.h"
#include "TFT_eSPI.h"
#include "Free_Fonts.h"

#include "airdisplay.h"
#include "sensorsdata.h"

// Use hardware SPI
TFT_eSPI tft = TFT_eSPI();

void init_display()
{
    tft.begin();
    tft.setRotation(0);
}

uint16_t get_sesnsor_color(const SENSOR_TYPE &s)
{
    switch (s)
    {
    case SENSOR_SCAN_NUMBER:
        return TFT_RED;
        break;
    case SENSOR_SCAN_TIME:
        return TFT_RED;
        break;
    case SENSOR_PRESSURE:
        return TFT_WHITE;
        break;
    case SENSOR_TEMPERATURE:
        return TFT_ORANGE;
        break;
    case SENSOR_HUMIDITY:
        return TFT_BLUE;
        break;
    case SENSOR_ECO2:
        return TFT_DARKGREEN;
        break;
    case SENSOR_TVOC:
        return TFT_DARKCYAN;
        break;
    }
    return TFT_RED;
}

void draw_frames()
{
    const uint16_t hh = 60;
    const uint16_t yy[] = {
        9,
        9 + hh,
        9 + hh + hh,
        9 + hh + hh + hh,
        9 + hh + hh + hh + hh,
        9 + hh + hh + hh + hh + hh};
    for (uint16_t i = 0; i < 6; i++)
    {
        tft.drawFastHLine(0, yy[i], 239, TFT_DARKGREY);
    }
    tft.drawFastVLine(0, 0, 319, TFT_DARKGREY);
    tft.drawFastVLine(239, 0, 319, TFT_DARKGREY);
}

void get_string_label(SENSOR_TYPE label_type, char *s, SENSORS_SCAN *scan)
{
    switch (label_type)
    {
    case SENSOR_SCAN_NUMBER:
        sprintf(s, "%8lu", scan->number);
        break;
    case SENSOR_SCAN_TIME:
        sprintf(s, "%10lu", scan->time);
        break;
    case SENSOR_PRESSURE:
        sprintf(s, "%3.0f", scan->pressure);
        break;
    case SENSOR_TEMPERATURE:
        sprintf(s, "%2.0f"
                   "\xB8"
                   "C",
                scan->temperature);
        break;
    case SENSOR_HUMIDITY:
        sprintf(s, "%2.0f%%", scan->humidity);
        break;
    case SENSOR_ECO2:
        sprintf(s, "%4.0f", scan->eco2);
        break;
    case SENSOR_TVOC:
        sprintf(s, "%4.0f", scan->tvoc);
        break;
    }
}

void get_string_label_2(SENSOR_TYPE label_type, char *s, SENSORS_SCAN *scan)
{
    switch (label_type)
    {
    case SENSOR_SCAN_NUMBER:
        sprintf(s, "%6lu", scan->number);
        break;
    case SENSOR_SCAN_TIME:
        sprintf(s, "%10lu", scan->time);
        break;
    case SENSOR_PRESSURE:
        sprintf(s, "%6.2f", scan->pressure);
        break;
    case SENSOR_TEMPERATURE:
        sprintf(s, "%5.2f", scan->temperature);
        break;
    case SENSOR_HUMIDITY:
        sprintf(s, "%4.1f", scan->humidity);
        break;
    case SENSOR_ECO2:
        sprintf(s, "%4.0f", scan->eco2);
        break;
    case SENSOR_TVOC:
        sprintf(s, "%4.0f", scan->tvoc);
        break;
    }
}

void get_string_label_value(SENSOR_TYPE label_type, char *s, float value)
{
    switch (label_type)
    {
    case SENSOR_PRESSURE:
        sprintf(s, "%3.0f", value);
        break;
    case SENSOR_TEMPERATURE:
        sprintf(s, "%2.0f", value);
        break;
    case SENSOR_HUMIDITY:
        sprintf(s, "%2.0f", value);
        break;
    case SENSOR_ECO2:
        sprintf(s, "%4.0f", value);
        break;
    case SENSOR_TVOC:
        sprintf(s, "%4.0f", value);
        break;
    default:
        sprintf(s, "xxxxxx");
    }
}

void draw_labels(SENSORS_SCAN *scan)
{
    const uint16_t N_LABELS = 5;

    const char s1[] = "Barometer";
    const char s2[] = "Temperature";
    const char s3[] = "Humidity";
    const char s4[] = "eCO2  ppm";
    const char s5[] = "TVOC  ppb";
    const char *ss[5] = {s1, s2, s3, s4, s5};

    const uint16_t hh = 60;
    const uint16_t label_pos[5][4] =
        {
            {110, 10, 130, hh},
            {110, 10 + hh, 130, hh},
            {110, 10 + hh + hh, 130, hh},
            {110, 10 + hh + hh + hh, 130, hh},
            {110, 10 + hh + hh + hh + hh, 130, hh},
        };

    const SENSOR_TYPE sensors[] = {SENSOR_PRESSURE,
                                   SENSOR_TEMPERATURE,
                                   SENSOR_HUMIDITY,
                                   SENSOR_ECO2,
                                   SENSOR_TVOC};

    for (int i = 0; i < N_LABELS; i++)
    {
        tft.setTextDatum(TC_DATUM);
        tft.setTextSize(1);
        tft.setTextColor(TFT_DARKGREY, TFT_DARKGREY, false);
        tft.setFreeFont(&FreeMono9pt7b);
        // tft.setFreeFont(&MSX_Font_6x8);
        tft.drawString(ss[i], label_pos[i][0] + label_pos[i][2] / 2, label_pos[i][1] + 2, GFXFF); // Print the string name of the font
        // if (sensors[i] == SENSOR_PRESSURE)
        // {
        //     tft.drawString("mmHg", label_pos[i][0] + label_pos[i][2] / 2, label_pos[i][1] + 55, GFXFF); // Print the string name of the font
        // }
        char s[10];
        get_string_label(sensors[i], s, scan);
        uint16_t c = get_sesnsor_color(sensors[i]);
        tft.setTextColor(c, c, false);
        // tft.setFreeFont(&FreeMono24pt7b);
        tft.setFreeFont(&MSX_Font_6x8);
        tft.setTextSize(4);
        tft.setTextDatum(TC_DATUM);
        tft.drawString(s, label_pos[i][0] + label_pos[i][2] / 2, label_pos[i][1] + 22, GFXFF); // Print the string name of the font
    }
}

void draw_current_measures(SENSORS_SCAN *scan)
{
    tft.setFreeFont(&MSX_Font_6x8);
    tft.setTextSize(1);
    tft.setTextColor(TFT_RED, TFT_RED, false);

    char s1[50];
    sprintf(s1, "P=%5.1f mmHg | T=%4.1f"
                "\xB8"
                "C | RH=%4.1f%%",
            scan->pressure,
            scan->temperature,
            scan->humidity);
    char s2[50];
    sprintf(s2, "%lu | eCO2=%.0f ppm | TVOC=%.0f ppb",
            scan->number,
            scan->eco2,
            scan->tvoc);

    tft.setTextDatum(TC_DATUM);
    tft.drawString(s1, 120, 1, GFXFF);   // Print the string name of the font
    tft.drawString(s2, 120, 311, GFXFF); // Print the string name of the font
}

void draw_history_plot_1(const SENSOR_TYPE &sensor, uint16_t x0, uint16_t y0, uint16_t h_max, uint16_t z)
{
    // SENSOR_TYPE sensor = SENSOR_TEMPERATURE;
    // uint16_t x0 = 4;
    // uint16_t y0 = 160;
    // uint16_t h_max = 160;
    // uint16_t z = 12; // пропуск после линии измерения
    uint16_t grid_step = 4;
    // |.x.x.x.x.|.x.x.x.x.|.x.x.x.x.|.x.x.x.x.|
    // 01234567890123456789012345678901234567890
    // |.x..x..x..x..|.x..x..x..x..|.x..x..x..x..|.x..x..x..x..|
    // 0123456789012345678901234567890123456789012345678901234567890
    uint16_t w_max = (HISTORY_LEN / grid_step) * (1 + 1) + 1 + HISTORY_LEN * (1 + z);
    uint16_t rect_color = TFT_DARKGREY;
    uint16_t grid_color = TFT_DARKGREY;

    uint16_t x_tmp = 0;
    for (uint16_t i = 0; i < (HISTORY_LEN / grid_step); i++)
    {
        tft.drawFastVLine(x0 + x_tmp, y0, h_max, grid_color);
        x_tmp = x_tmp + (1 + 1 + grid_step * (1 + z));
    }

    tft.drawRect(x0, y0, w_max, h_max, rect_color);

    float mn, mx;
    nomalize_measures(sensor, h_max, mn, mx);

    uint16_t sensor_color = get_sesnsor_color(sensor);
    x_tmp = 0;
    for (uint16_t i = 0; i < HISTORY_LEN; i++)
    {
        if ((i % grid_step) == 0)
        {
            x_tmp = x_tmp + 2; // линия сетки и пустой пиксель
        }
        if (measures[i].number > 0)
        {
            uint16_t h1 = normalized_values[i];
            uint16_t y1 = y0 + h_max - 1 - normalized_values[i];
            tft.drawFastVLine(x0 + x_tmp, y1, h1, sensor_color);
            if (z > 2)
            {
                for (uint16_t j = 1; j < (z - 1); j++)
                {
                    tft.drawFastVLine(x0 + x_tmp + j, y1, h1, sensor_color);
                }
            }
        }
        x_tmp = x_tmp + (1 + z);
    }

    tft.setFreeFont(&MSX_Font_6x8);
    tft.setTextSize(1);
    tft.setTextDatum(TL_DATUM);
    tft.setTextColor(sensor_color, TFT_BLACK, true);
    char s[10];
    get_string_label_value(sensor, s, mx);
    tft.drawString(s, x0 + 2, y0 + 2, GFXFF); // Print the string name of the font
    get_string_label_value(sensor, s, mn);
    tft.drawString(s, x0 + 2, y0 + h_max - 8 - 1, GFXFF); // Print the string name of the font
}

void draw_history_arrays()
{
    tft.fillScreen(TFT_BLACK); // Clear screen

    const char s0[] = "Scan";
    const char s1[] = "P,mmhg";
    const char s2[] = "Tmp,"
                      "\xB8"
                      "C";
    const char s3[] = "Hum,%";
    const char s4[] = "eCO2";
    const char s5[] = "TVOC";
    const char *col_labels[6] = {s0, s1, s2, s3, s4, s5};

    const uint16_t col_pos[6] =
        {
            6 + 2, // num 6
            6 + 2, // press
            5 + 2, // temp
            4 + 2, // hum
            4 + 2, // eco2
            4 + 2, // tvoc
        };

    const SENSOR_TYPE sensors[] = {
        SENSOR_SCAN_NUMBER,
        SENSOR_PRESSURE,
        SENSOR_TEMPERATURE,
        SENSOR_HUMIDITY,
        SENSOR_ECO2,
        SENSOR_TVOC};
    uint16_t x = 0;
    tft.setFreeFont(&MSX_Font_6x8);
    tft.setTextSize(1);
    tft.setTextDatum(TL_DATUM);

    for (uint16_t col = 0; col < 6; col++)
    {
        uint16_t color = get_sesnsor_color(sensors[col]);
        tft.setTextColor(color, color, false);
        // название столбца
        tft.drawString(col_labels[col], x, 5, GFXFF); // Print the string name of the font
        // значения из истории
        for (uint16_t i = 0; i < HISTORY_LEN; i++)
        {
            char s[10];
            get_string_label_2(sensors[col], s, &(measures[i]));
            tft.drawString(s, x, 15 + i * 9, GFXFF); // Print the string name of the font
        }
        x = x + col_pos[col] * 6;
    }
}

void draw_display()
{
    SENSORS_SCAN scan = measures[LAST_MEASURE];
    // scan.pressure = 777.77;
    // scan.temperature = 55.55;
    // scan.humidity = 88.88;
    //   read_sensors_scan(&scan);

    tft.fillScreen(TFT_BLACK); // Clear screen

    draw_history_arrays();
    draw_history_plot_1(SENSOR_PRESSURE, 10, 160, 75, 5);
    draw_history_plot_1(SENSOR_TEMPERATURE, 10, 245, 75, 5);
    draw_history_plot_1(SENSOR_HUMIDITY, 125, 160, 50, 5);
    draw_history_plot_1(SENSOR_ECO2, 125, 215, 50, 5);
    draw_history_plot_1(SENSOR_TVOC, 125, 270, 50, 5);

    // draw_current_measures(&scan);
    // draw_labels(&scan);
    // draw_frames();
    // draw_history_plot_1(SENSOR_PRESSURE, 0, 10, 60, 5);
    // draw_history_plot_1(SENSOR_TEMPERATURE, 0, 10 + 60, 60, 5);
    // draw_history_plot_1(SENSOR_HUMIDITY, 0, 10 + 60 + 60, 60, 5);
    // draw_history_plot_1(SENSOR_ECO2, 0, 10 + 60 + 60 + 60, 60, 5);
    // draw_history_plot_1(SENSOR_TVOC, 0, 10 + 60 + 60 + 60 + 60, 60, 5);
}
