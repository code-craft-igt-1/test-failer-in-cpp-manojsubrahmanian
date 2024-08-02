// test_colormap.cpp
#include <gtest/gtest.h>
#include <sstream>
#include <string>
#include "colormap.h"

TEST(ColorMapTest, ColorMapOutput) {
    std::vector<std::string> result = getColorMap();
    std::vector<std::string> expected_output = {
        "Index=0, MajorColor=White, MinorColor=Blue",
        "Index=1, MajorColor=White, MinorColor=Orange",
        "Index=2, MajorColor=White, MinorColor=Green",
        "Index=3, MajorColor=White, MinorColor=Brown",
        "Index=4, MajorColor=White, MinorColor=Slate",
        "Index=5, MajorColor=Red, MinorColor=Blue",
        "Index=6, MajorColor=Red, MinorColor=Orange",
        "Index=7, MajorColor=Red, MinorColor=Green",
        "Index=8, MajorColor=Red, MinorColor=Brown",
        "Index=9, MajorColor=Red, MinorColor=Slate",
        "Index=10, MajorColor=Black, MinorColor=Blue",
        "Index=11, MajorColor=Black, MinorColor=Orange",
        "Index=12, MajorColor=Black, MinorColor=Green",
        "Index=13, MajorColor=Black, MinorColor=Brown",
        "Index=14, MajorColor=Black, MinorColor=Slate",
        "Index=15, MajorColor=Yellow, MinorColor=Blue",
        "Index=16, MajorColor=Yellow, MinorColor=Orange",
        "Index=17, MajorColor=Yellow, MinorColor=Green",
        "Index=18, MajorColor=Yellow, MinorColor=Brown",
        "Index=19, MajorColor=Yellow, MinorColor=Slate",
        "Index=20, MajorColor=Violet, MinorColor=Blue",
        "Index=21, MajorColor=Violet, MinorColor=Orange",
        "Index=22, MajorColor=Violet, MinorColor=Green",
        "Index=23, MajorColor=Violet, MinorColor=Brown",
        "Index=24, MajorColor=Violet, MinorColor=Slate"
    };

    ASSERT_EQ(result.size(), 25);
    EXPECT_EQ(result, expected_output);
}
