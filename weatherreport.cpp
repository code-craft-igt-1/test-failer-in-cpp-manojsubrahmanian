#include <string>
#include "WeatherReport.h"

namespace WeatherSpace {

    std::string Report(const IWeatherSensor& sensor) {
        double temperature = sensor.TemperatureInC();
        double precipitation = sensor.Precipitation();
        double windSpeed = sensor.WindSpeedKMPH();
        double humidity = sensor.Humidity();
        std::string report;

        if (precipitation == 0 && windSpeed < 10 && 
            temperature >= 20 && temperature <= 35 && humidity < 60) {
            report = "Sunny day";
        } else if (precipitation <= 5 && windSpeed < 20 && temperature >= 15 
            && temperature <= 30 && humidity >= 60 && humidity <= 80) {
            report = "Partly cloudy";
        } else if (precipitation > 10 && windSpeed >= 20 && temperature <= 30 && humidity > 80) {
            report = "Alert, Stormy with heavy rain";
        } else {
            report = "Unknown weather condition";
        }

        return report;
    }
} // namespace WeatherSpace
