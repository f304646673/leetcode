#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test) {
    Solution solution;
    vector<int> hours = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(solution.countCompleteDayPairs(hours), 0);
}

TEST(Solution, Test2) {
    Solution solution;
    vector<int> hours = {12,12,30,24,24};
    EXPECT_EQ(solution.countCompleteDayPairs(hours), 2);
}

TEST(Solution, Test3) {
    Solution solution;
    vector<int> hours = {72,48,24,3};
    EXPECT_EQ(solution.countCompleteDayPairs(hours), 3);
}

TEST(Solution, Test4) {
    Solution solution;
    vector<int> hours = {11, 11, 24};
    EXPECT_EQ(solution.countCompleteDayPairs(hours), 0);
}