#include <assert.h>
#include <array>
#include <iostream>
#include <sstream>
#include <vector>
#include "ColorMap.h"

std::vector<std::string> getColorPairs(const std::string& majorColor, const std::array<std::string, 5>& minorColors, int& pairIndex) {
    std::vector<std::string> colorPairs;
    for (const auto& minorColor : minorColors) {
        std::ostringstream outputStream;
        outputStream << "Index=" << pairIndex << ", MajorColor=" << majorColor << ", MinorColor=" << minorColor;
        colorPairs.push_back(outputStream.str());
        ++pairIndex;
    }
    return colorPairs;
}

std::vector<std::string> getColorMap() {
    const std::array<std::string, 5> majorColors = {"White", "Red", "Black", "Yellow", "Violet"};
    const std::array<std::string, 5> minorColors = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    int pairIndex = 0;
    std::vector<std::string> colorMap;
    for (const auto& majorColor : majorColors) {
        std::vector<std::string> colorPairs = getColorPairs(majorColor, minorColors, pairIndex);
        colorMap.insert(colorMap.end(), colorPairs.begin(), colorPairs.end());
    }
    return colorMap;
}

// Function to format the color map
std::string formatColorMap(const std::vector<std::string>& colorMap) {
    std::ostringstream formattedOutput;
    for (const auto& entry : colorMap) {
        formattedOutput << entry << "\n";
    }
    return formattedOutput.str();
}
