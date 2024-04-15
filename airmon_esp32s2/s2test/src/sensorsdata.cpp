#include <math.h>
#include "sensorsdata.h"

SENSORS_SCAN measures[HISTORY_LEN];

uint16_t normalized_values[HISTORY_LEN];
float values[HISTORY_LEN];

void init_history()
{
	for (uint16_t i = 0; i < HISTORY_LEN; i++)
	{
		measures[i].number = 0;
		measures[i].time = 0;
		measures[i].pressure = 0;
		measures[i].temperature = 0;
		measures[i].humidity = 0;
		measures[i].eco2 = 0;
		measures[i].tvoc = 0;
	}
}

void append_measure_to_history(SENSORS_SCAN s)
{
	// самое старое в начале, так проще рисовать
	// а новое положить в последний индекс
	for (uint16_t i = 0; i < (HISTORY_LEN - 1); i++)
	{
		measures[i] = measures[i + 1];
	}
	measures[LAST_MEASURE] = s;
}

void fill_values(SENSOR_TYPE t)
{
	switch (t)
	{
	case SENSOR_PRESSURE:
		for (uint16_t i = 0; i < HISTORY_LEN; i++)
		{
			values[i] = measures[i].pressure;
		}
		break;

	case SENSOR_TEMPERATURE:
		for (uint16_t i = 0; i < HISTORY_LEN; i++)
		{
			values[i] = measures[i].temperature;
		}
		break;
	case SENSOR_HUMIDITY:
		for (uint16_t i = 0; i < HISTORY_LEN; i++)
		{
			values[i] = measures[i].humidity;
		}
		break;

	case SENSOR_ECO2:
		for (uint16_t i = 0; i < HISTORY_LEN; i++)
		{
			values[i] = measures[i].eco2;
		}
		break;
	case SENSOR_TVOC:
		for (uint16_t i = 0; i < HISTORY_LEN; i++)
		{
			values[i] = measures[i].tvoc;
		}
		break;
	default:
		for (uint16_t i = 0; i < HISTORY_LEN; i++)
		{
			values[i] = 0;
		}
		break;
	}
}

void set_nice_min_max(const SENSOR_TYPE &t, float &mn, float &mx)
{
	// для разных сенсоров поправим диапазоны
	if (t == SENSOR_ECO2)
	{
		// 400 - 600 - 1200 - 3000
		mn = 400;
		// округление до большей сотни
		mx = (int(mx / 100) + 1) * 100.0;
		return;
	}
	if (t == SENSOR_TVOC)
	{
		mn = (mn < 200) ? 0 : 100;
		mx = (int(mx / 100) + 1) * 100;
		return;
	}
	if (t == SENSOR_PRESSURE)
	{
		mn = floor(mn) - 1.0;
		mx = ceil(mx) + 1.0;
		return;
	}
	if (t == SENSOR_TEMPERATURE)
	{
		mn = floor(mn) - 1.0;
		mx = ceil(mx) + 1.0;
		return;
	}
	if (t == SENSOR_HUMIDITY)
	{
		mn = floor(mn) - 2.0;
		mx = ceil(mx) + 2.0;
		if (mn<0)
		{
			mn=0;
		}
		if (mx>99)
		{
			mx=99;
		}
		return;
	}
	return;
}

void nomalize_measures(SENSOR_TYPE t, uint16_t h_max, float &mn, float &mx)
{
	h_max = h_max - 2;
	fill_values(t);
	// сюда должны попасть, когда есть хоть одна запись
	// не забыть, что буфер заполняем с конца
	mn = values[LAST_MEASURE];
	mx = values[LAST_MEASURE];
	// нашли min/max для актуальных значений (measures[i].number > 0)
	for (uint16_t i = 0; i < HISTORY_LEN; i++)
	{
		if (measures[i].number > 0)
		{
			if (values[i] < mn)
			{
				mn = values[i];
			}
			if (values[i] > mx)
			{
				mx = values[i];
			}
		}
	}

	// поправим диапазон для красоты
	set_nice_min_max(t, mn, mx);

	// задвинем в диапазон значения, если они выскочили
	// актуально для sgp
	for (uint16_t i = 0; i < HISTORY_LEN; i++)
	{
		if (measures[i].number > 0)
		{
			if (values[i] > mx)
			{
				values[i] = mx;
			}
			if (values[i] < mn)
			{
				values[i] = mn;
			}
		}
	}

	// отмасштабировать по заданной высоте
	float k = float(h_max) / (mx - mn);
	for (uint16_t i = 0; i < HISTORY_LEN; i++)
	{
		normalized_values[i] = 0;
		if (measures[i].number > 0)
		{
			uint16_t v = (uint16_t) int(k * (values[i] - mn));
			if (v == 0)
			{
				v = 1;
			}
			else
			{
				if (v >= (h_max - 1))
				{
					v = h_max - 1;
				}
			}
			normalized_values[i] = v;
		}
	}
}