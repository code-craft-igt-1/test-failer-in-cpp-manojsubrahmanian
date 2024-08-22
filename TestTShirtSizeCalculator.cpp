#include <gtest/gtest.h>
#include "TShirtSizeCalculator.h"

TEST(SizeTest, SmallSize) {
    EXPECT_EQ(Size(37), 'S');
    EXPECT_EQ(Size(38), 'S');
    EXPECT_EQ(Size(36), 'S');  // Lower boundary for Small
    EXPECT_EQ(Size(37), 'S');  // Upper boundary for Small
}

TEST(SizeTest, MediumSize) {
    EXPECT_EQ(Size(39), 'M');
    EXPECT_EQ(Size(40), 'M');
}

TEST(SizeTest, LargeSize) {
    EXPECT_EQ(Size(41), 'L');  // Lower boundary for Large
    EXPECT_EQ(Size(42), 'L');  // Middle value for Large
    EXPECT_NE(Size(43), 'L');  // Upper boundary for Large
}


