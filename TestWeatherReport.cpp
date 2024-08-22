#include <string>
#include "gtest/gtest.h"
#include "WeatherReport.h"
#include "SensorStub.h"

// Test case for Sunny day
TEST(PredictWeatherTest, SunnyDay) {
    WeatherSpace::SensorStub sensor(25, 0, 5, 50);
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Sunny day");
}

// Test case for Partly cloudy
TEST(PredictWeatherTest, PartlyCloudy) {
    WeatherSpace::SensorStub sensor(22, 3, 15, 70);
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Partly cloudy");
}

// Test case for Alert, Stormy with heavy rain
TEST(PredictWeatherTest, StormyWithHeavyRain) {
    WeatherSpace::SensorStub sensor(18, 15, 25, 85);
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Alert, Stormy with heavy rain");
}

// Test case for Unknown weather condition
TEST(PredictWeatherTest, UnknownWeatherCondition) {
    WeatherSpace::SensorStub sensor(10, 0, 5, 90);
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Unknown weather condition");
}

// Test case for boundary values: high temperature for sunny day
TEST(PredictWeatherTest, SunnyDayHighTemperature) {
    WeatherSpace::SensorStub sensor(35, 0, 9, 59);
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Sunny day");
}

// Test case for boundary values: low temperature for partly cloudy
TEST(PredictWeatherTest, PartlyCloudyLowTemperature) {
    WeatherSpace::SensorStub sensor(15, 4, 19, 65);
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Partly cloudy");
}

// Test case for boundary values: high wind speed for stormy
TEST(PredictWeatherTest, StormyWithHeavyRainHighWindSpeed) {
    WeatherSpace::SensorStub sensor(28, 12, 30, 90);
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Alert, Stormy with heavy rain");
}




