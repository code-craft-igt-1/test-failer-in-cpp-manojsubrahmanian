#include <gtest/gtest.h>
#include "TShirtSizeCalculator.h"

TEST(SizeTest, SmallSize) {
    EXPECT_EQ(Size(37), 'S');
    EXPECT_EQ(Size(0), 'S');
}

TEST(SizeTest, MediumSize) {
    EXPECT_EQ(Size(38), 'M');
    EXPECT_EQ(Size(40), 'M');
}

TEST(SizeTest, LargeSize) {
    EXPECT_EQ(Size(42), 'L');
    EXPECT_EQ(Size(43), 'L');
    EXPECT_EQ(Size(100), 'L');
}
