// weather_report.h
#ifndef WEATHER_REPORT_H
#define WEATHER_REPORT_H

#include <string>
#include "iweathersensor.h"

namespace WeatherSpace {
	std::string Report(const IWeatherSensor& sensor);
}

#endif // WEATHER_REPORT_H