#include <gtest/gtest.h>
#include "TShirtSizeCalculator.h"

TEST(SizeTest, SmallSize) {
    EXPECT_EQ(Size(37), 'S');
    EXPECT_EQ(Size(0), 'S');
    EXPECT_EQ(Size(36), 'S');  // Lower boundary for Small
    EXPECT_EQ(Size(37), 'S');  // Upper boundary for Small
}

TEST(SizeTest, MediumSize) {
    EXPECT_EQ(Size(38), 'M');
    EXPECT_EQ(Size(40), 'M');
    EXPECT_EQ(Size(39), 'M');  // Middle value for Medium
    EXPECT_EQ(Size(38), 'M');  // Lower boundary for Medium
    EXPECT_EQ(Size(40), 'M');  // Upper boundary for Medium
}

TEST(SizeTest, LargeSize) {
    EXPECT_EQ(Size(42), 'L');
    EXPECT_EQ(Size(43), 'L');
    EXPECT_EQ(Size(100), 'L');
    EXPECT_EQ(Size(41), 'L');  // Lower boundary for Large
    EXPECT_EQ(Size(42), 'L');  // Middle value for Large
    EXPECT_EQ(Size(43), 'L');  // Upper boundary for Large
}

TEST(SizeTest, BoundaryCases) {
    EXPECT_EQ(Size(37), 'S');  // Boundary between Small and Medium
    EXPECT_EQ(Size(38), 'M');  // Boundary between Small and Medium
    EXPECT_EQ(Size(40), 'M');  // Boundary between Medium and Large
    EXPECT_EQ(Size(41), 'L');  // Boundary between Medium and Large
}