#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SolutionTest, Test) {
    Solution solution;

    EXPECT_EQ(solution.minChanges(13, 4), 2);
}

TEST(SolutionTest, Test2) {
    Solution solution;

    EXPECT_EQ(solution.minChanges(21, 21), 0);
}

TEST(SolutionTest, Test3) {
    Solution solution;

    EXPECT_EQ(solution.minChanges(14, 13), -1);
}