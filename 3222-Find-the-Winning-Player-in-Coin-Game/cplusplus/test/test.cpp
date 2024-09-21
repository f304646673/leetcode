#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SolutionTest, Test) {
    Solution solution;
    EXPECT_EQ(solution.losingPlayer(2, 7), "Alice");
}

TEST(SolutionTest, Test2) {
    Solution solution;
    EXPECT_EQ(solution.losingPlayer(4, 10), "Bob");
}