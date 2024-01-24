#include "lib/add.hpp"
#include <gtest/gtest.h>

TEST(MathTest, AddFunction)
{
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(-1, 1), 0);
    EXPECT_EQ(add(-1, -1), -2);
}
