#include "gtest/gtest.h"
#include "WeatherReport.h"
#include "SensorStub.h"

const int HUMIDITY_RAINY = 72;
const int PRECIPITATION_RAINY = 70;
const int TEMP_RAINY = 26;
const int WINDSPEED_RAINY = 52;

const int HUMIDITY_STORMY = 72;
const int PRECIPITATION_STORMY = 70;
const int TEMP_STORMY = 26;
const int WINDSPEED_STORMY = 52;

const int HUMIDITY_SUNNY = 72;
const int PRECIPITATION_SUNNY = 10;
const int TEMP_SUNNY = 26;
const int WINDSPEED_SUNNY = 52;

// TestSunny
TEST(WeatherReportTest, TestSunny) {
    WeatherSpace::SensorStub sensor(
        HUMIDITY_SUNNY,
        PRECIPITATION_SUNNY,
        TEMP_SUNNY,
        WINDSPEED_SUNNY);

    std::string report = WeatherSpace::Report(sensor);
    std::cout << report << std::endl;
    ASSERT_NE(report.find("Sunny"), std::string::npos);
}

// TestRainy
TEST(WeatherReportTest, TestRainy) {
    WeatherSpace::SensorStub sensor(
        HUMIDITY_RAINY,
        PRECIPITATION_RAINY,
        TEMP_RAINY,
        WINDSPEED_RAINY);

    std::string report = WeatherSpace::Report(sensor);
    std::cout << report << std::endl;
    ASSERT_NE(report.find("rain"), std::string::npos);
}

// TestStormy
TEST(WeatherReportTest, TestStormy) {
    WeatherSpace::SensorStub sensor(
        HUMIDITY_STORMY,
        PRECIPITATION_STORMY,
        TEMP_STORMY,
        WINDSPEED_STORMY);

    std::string report = WeatherSpace::Report(sensor);
    std::cout << report << std::endl;
    ASSERT_NE(report.find("Stormy"), std::string::npos);
}





