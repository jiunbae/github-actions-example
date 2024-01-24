#include "lib/sub.hpp"
#include <gtest/gtest.h>

TEST(MathTest, SubFunction)
{
    EXPECT_EQ(sub(1, 2), 3);
    EXPECT_EQ(sub(-1, 1), 0);
    EXPECT_EQ(sub(-1, -1), -2);
}
