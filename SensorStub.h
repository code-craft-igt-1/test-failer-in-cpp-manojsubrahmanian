/// This is a stub for a weather sensor. For the sake of testing
/// we create a stub that generates weather data and allows us to
/// test the other parts of this application in isolation
/// without needing the actual Sensor during development

#ifndef SENSORSTUB_H
#define SENSORSTUB_H

#include "IWeatherSensor.h"
namespace WeatherSpace {    
    class SensorStub : public IWeatherSensor {
        private:
            int m_humidity;
            int m_precipitation;
            double m_temperatureInC;
            int m_windSpeedKMPH;
    
        public:
            // Constructor
            SensorStub(int humidity, int precipitation, double temperatureInC, int windSpeedKMPH)
                : m_humidity(humidity), m_precipitation(precipitation), m_temperatureInC(temperatureInC), m_windSpeedKMPH(windSpeedKMPH) {}
    
            // Overridden methods
            int Humidity() const override {
                return m_humidity;
            }
    
            int Precipitation() const override {
                return m_precipitation;
            }
    
            double TemperatureInC() const override {
                return m_temperatureInC;
            }
    
            int WindSpeedKMPH() const override {
                return m_windSpeedKMPH;
            }
    };
}

#endif // SENSORSTUB_H