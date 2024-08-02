#include <assert.h>
#include <array>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#include "ColorMap.h"

std::vector<std::string> getMjorColorPairs(const std::string& majorColor, int* pairIndex) {
    const std::array<std::string, 5> minorColors = {"Blue", "Orange", "Green", "Brown", "Slate"};
    std::vector<std::string> colorPairs;
    for (const auto& minorColor : minorColors) {
        std::ostringstream colorPairStream;
        colorPairStream << "Index=" << *pairIndex << ", MajorColor=" << majorColor;
        colorPairStream << ", MinorColor=" << minorColor;
        colorPairs.push_back(colorPairStream.str());
        (*pairIndex)++;
    }
    return colorPairs;
}

std::vector<std::string> getColorMap() {
    const std::array<std::string, 5> majorColors = {"White", "Red", "Black", "Yellow", "Violet"};

    int pairIndex = 0;
    std::vector<std::string> colorMap;
    for (const auto& majorColor : majorColors) {
        std::vector<std::string> colorPairs = getMjorColorPairs(majorColor, &pairIndex);
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
