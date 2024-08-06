#include "gtest/gtest.h"
#include "WeatherReport.h"
#include "SensorStub.h"

const int TEMP_RAINY = 50;
const int HUMIDITY_RAINY = 70;
const int PRECIPITATION_RAINY = 20;
const int WINDSPEED_RAINY = 50;

const int TEMP_HIGH_PRECIP_LOW_WIND = 50;
const int HUMIDITY_HIGH_PRECIP_LOW_WIND = 70;
const int PRECIPITATION_HIGH_PRECIP_LOW_WIND = 20;
const int WINDSPEED_HIGH_PRECIP_LOW_WIND = 40;

const int TEMP_LOW_HUMIDITY = 0;
const int HUMIDITY_LOW_HUMIDITY = 50;
const int PRECIPITATION_LOW_HUMIDITY = 20;
const int WINDSPEED_LOW_HUMIDITY = 50;

const int TEMP_HIGH_HUMIDITY = 50;
const int HUMIDITY_HIGH_HUMIDITY = 90;
const int PRECIPITATION_HIGH_HUMIDITY = 20;
const int WINDSPEED_HIGH_HUMIDITY = 50;

// TestRainy
TEST(WeatherReportTest, TestRainy) {
    WeatherSpace::SensorStub sensor(
        TEMP_RAINY,
        HUMIDITY_RAINY,
        PRECIPITATION_RAINY,
        WINDSPEED_RAINY);

    std::string report = WeatherSpace::Report(sensor);
    std::cout << report << std::endl;
    ASSERT_NE(report.find("rain"), std::string::npos);
}

// TestHighPrecipitationAndLowWindspeed
TEST(WeatherReportTest, TestHighPrecipitationAndLowWindspeed) {
    WeatherSpace::SensorStub sensor(
        TEMP_HIGH_PRECIP_LOW_WIND,
        HUMIDITY_HIGH_PRECIP_LOW_WIND,
        PRECIPITATION_HIGH_PRECIP_LOW_WIND,
        WINDSPEED_HIGH_PRECIP_LOW_WIND);

    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestLowHumidity
TEST(WeatherReportTest, TestLowHumidity) {
    WeatherSpace::SensorStub sensor(
        TEMP_LOW_HUMIDITY,
        HUMIDITY_LOW_HUMIDITY,
        PRECIPITATION_LOW_HUMIDITY,
        WINDSPEED_LOW_HUMIDITY);

    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestHighHumidity
TEST(WeatherReportTest, TestHighHumidity) {
    WeatherSpace::SensorStub sensor(
        TEMP_HIGH_HUMIDITY,
        HUMIDITY_HIGH_HUMIDITY,
        PRECIPITATION_HIGH_HUMIDITY,
        WINDSPEED_HIGH_HUMIDITY);

    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}
