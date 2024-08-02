#include "gtest/gtest.h"
#include "WeatherReport.h"
#include "SensorStub.h"

// TestRainy
TEST(WeatherReportTest, TestRainy) {
    WeatherSpace::SensorStub sensor;
    std::string report = WeatherSpace::Report(sensor);
    std::cout << report << std::endl;
    ASSERT_NE(report.find("rain"), std::string::npos);
}

// TestHighPrecipitationAndLowWindspeed
TEST(WeatherReportTest, TestHighPrecipitationAndLowWindspeed) {
    // This instance of stub needs to be different-
    // to give high precipitation (>60) and low wind-speed (<50)
    WeatherSpace::SensorStub sensor;

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    std::string report = WeatherSpace::Report(sensor);
    ASSERT_GT(report.length(), 0);
}
