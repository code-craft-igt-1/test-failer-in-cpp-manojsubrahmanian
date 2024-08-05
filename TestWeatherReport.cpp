#include "gtest/gtest.h"
#include "WeatherReport.h"
#include "SensorStub.h"

// TestRainy
TEST(WeatherReportTest, TestRainy) {
    WeatherSpace::SensorStub sensor(50, 70, 20, 50);
    std::string report = WeatherSpace::Report(sensor);
    std::cout << report << std::endl;
    ASSERT_NE(report.find("rain"), std::string::npos);
}

// TestHighPrecipitationAndLowWindspeed
TEST(WeatherReportTest, TestHighPrecipitationAndLowWindspeed) {
    WeatherSpace::SensorStub sensor(50, 70, 20, 40);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestLowHumidity
TEST(WeatherReportTest, TestLowHumidity) {
    WeatherSpace::SensorStub sensor(0, 50, 20, 50);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestHighHumidity
TEST(WeatherReportTest, TestHighHumidity) {
    WeatherSpace::SensorStub sensor(100, 50, 20, 50);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestLowTemperature
TEST(WeatherReportTest, TestLowTemperature) {
    WeatherSpace::SensorStub sensor(50, 50, -50, 50);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestHighTemperature
TEST(WeatherReportTest, TestHighTemperature) {
    WeatherSpace::SensorStub sensor(50, 50, 50, 50);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestLowWindSpeed
TEST(WeatherReportTest, TestLowWindSpeed) {
    WeatherSpace::SensorStub sensor(50, 50, 20, 0);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestHighWindSpeed
TEST(WeatherReportTest, TestHighWindSpeed) {
    WeatherSpace::SensorStub sensor(50, 50, 20, 100);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestZeroPrecipitation
TEST(WeatherReportTest, TestZeroPrecipitation) {
    WeatherSpace::SensorStub sensor(50, 0, 20, 50);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}

// TestMaxPrecipitation
TEST(WeatherReportTest, TestMaxPrecipitation) {
    WeatherSpace::SensorStub sensor(50, 100, 20, 50);
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}
