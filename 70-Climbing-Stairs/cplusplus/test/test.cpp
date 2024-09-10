#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ClimbingStairs, Example1) {
    Solution s;
    int result = s.climbStairs(2);
    EXPECT_EQ(result, 2);
}

TEST(ClimbingStairs, Example2) {
    Solution s;
    int result = s.climbStairs(3);
    EXPECT_EQ(result, 3);
}

TEST(ClimbingStairs, Example3) {
    Solution s;
    int result = s.climbStairs(4);
    EXPECT_EQ(result, 5);
}

TEST(ClimbingStairs, Example4) {
    Solution s;
    int result = s.climbStairs(5);
    EXPECT_EQ(result, 8);
}

TEST(ClimbingStairs, Example5) {
    Solution s;
    int result = s.climbStairs(6);
    EXPECT_EQ(result, 13);
}

TEST(ClimbingStairs, Example6) {
    Solution s;
    int result = s.climbStairs(7);
    EXPECT_EQ(result, 21);
}
