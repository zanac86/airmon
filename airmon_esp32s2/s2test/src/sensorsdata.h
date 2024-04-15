#ifndef SENSORSDATA_H
#define SENSORSDATA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

typedef enum
{
	SENSOR_SCAN_NUMBER,
	SENSOR_SCAN_TIME,
	SENSOR_PRESSURE,
	SENSOR_TEMPERATURE,
	SENSOR_HUMIDITY,
	SENSOR_ECO2,
	SENSOR_TVOC,
} SENSOR_TYPE;

typedef struct {
	// = 0 - scan not filled, must skip when plotting
	uint32_t number;
	// ticks
	uint32_t time;
	// pressure in mmHg ( 700-800 mmHg = 933-1066 hPa)
	float pressure;
	// temperature in °C
	float temperature;
	// humidity in %
	float humidity;
	// CO2
	// 400-600   good
	// 600-1100  fair
	// 1100-9999 poor
	float eco2;
	// TVOC
	// 0-60      good
	// 60-300    fair
	// 300-9999  poor
	float tvoc;
} SENSORS_SCAN;

// 15 min interval x 16 = 4 hours
#define HISTORY_LEN 16
#define LAST_MEASURE (HISTORY_LEN-1)

extern SENSORS_SCAN measures[HISTORY_LEN];
extern uint16_t normalized_values[HISTORY_LEN];

/// clear history arrays;
void init_history();
void append_measure_to_history(SENSORS_SCAN s);
void nomalize_measures(SENSOR_TYPE t, uint16_t h_max, float &mn, float &mx);

#endif
