#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test) {
    Solution solution;
    ASSERT_EQ(solution.numberOfChild(2, 1), 1);
    ASSERT_EQ(solution.numberOfChild(3, 5), 1);
    ASSERT_EQ(solution.numberOfChild(5, 6), 2);
    ASSERT_EQ(solution.numberOfChild(4, 2), 2);
}
