#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
// #include <Adafruit_BME280.h>
#include <Adafruit_BMP280.h>
#include <Adafruit_SGP30.h>

#include "sensorsreader.h"

uint32_t read_count = 0;

Adafruit_BMP280 bmx280;
Adafruit_SGP30 sgp30;

void init_bmp()
{
	// i2c_config_t i2c_cfg = { .mode = I2C_MODE_MASTER,
	// 		.sda_io_num = GPIO_NUM_8,
	// 		.scl_io_num = GPIO_NUM_9,
	// 		.sda_pullup_en = false,
	// 		.scl_pullup_en = false,
	// 		.master = { .clk_speed = 100000 } };

#define I2C_SDA 8
#define I2C_SCL 9
#define I2C_Frequency 100000
	bool result1 = Wire.begin(I2C_SDA, I2C_SCL, I2C_Frequency);
	if (result1)
	{
		Serial.println("\nI2C started");
	}
	else
	{
		Serial.println("\nI2C not started");
	}

	bool result = bmx280.begin(0x76);

	if (result1)
	{
		Serial.println("\nBME started");
	}
	else
	{
		Serial.println("\nBME not started");
	}

	Serial.print("\nBME sensor ID ");
	Serial.println(bmx280.sensorID(), HEX);

	// bme280.setSampling(
	// 	Adafruit_BME280::MODE_NORMAL,
	// 	Adafruit_BME280::SAMPLING_X8,
	// 	Adafruit_BME280::SAMPLING_X8,
	// 	Adafruit_BME280::SAMPLING_X8,
	// 	Adafruit_BME280::FILTER_OFF,
	// 	Adafruit_BME280::STANDBY_MS_250
	// );
}

void init_sgp()
{
	// bool result=sgp30.begin();
}

void init_sensors_reader()
{
	init_bmp();
	init_sgp();
}

void read_bmp(SENSORS_SCAN *s)
{

	s->temperature = bmx280.readTemperature();
	s->pressure = bmx280.readPressure(); // in Pa 101000/133.32=757mm
	s->pressure = (s->pressure) / (133.322387415);
	// s->humidity=bme280.readHumidity();
	s->humidity = 88.88; // bmp280 - have no humidity, so hum=0
	if (s->humidity>99.0)
	{
		s->humidity=99.0;
	}
}

void read_sgp(SENSORS_SCAN *s)
{
	s->eco2 = 1234;
	s->tvoc = 2345;
}

void read_sensors_scan(SENSORS_SCAN *s)
{
	read_bmp(s);
	read_sgp(s);

	int64_t tmp = esp_timer_get_time();			  // microseconds
	uint32_t secs = (uint32_t)(tmp / 1000000ull); // seconds
	s->time = secs;

	// increment at first call, so no number==0
	// number==0 - will skip in draw function
	read_count++;
	s->number = read_count;
}
