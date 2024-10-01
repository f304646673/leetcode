#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    Solution solution;
    string s = "234Adas";
    EXPECT_EQ(solution.isValid(s), true);
}

TEST(Solution, Test2) {
    Solution solution;
    string s = "234";
    EXPECT_EQ(solution.isValid(s), false);
}

TEST(Solution, Test3) {
    Solution solution;
    string s = "Adas";
    EXPECT_EQ(solution.isValid(s), true);
}

TEST(Solution, Test4) {
    Solution solution;
    string s = "b3";
    EXPECT_EQ(solution.isValid(s), false);
}

TEST(Solution, Test5) {
    Solution solution;
    string s = "a3$e";
    EXPECT_EQ(solution.isValid(s), false);
}

TEST(Solution, Test6) {
    Solution solution;
    string s = "2A";
    EXPECT_EQ(solution.isValid(s), false);
}

TEST(Solution, Test7) {
    Solution solution;
    string s = "IS";
    EXPECT_EQ(solution.isValid(s), false);
}