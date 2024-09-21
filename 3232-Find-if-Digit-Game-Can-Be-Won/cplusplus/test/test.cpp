#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SolutionTest, Test) {
    Solution solution;

    vector<int> nums = {1,2,3,4,10};
    EXPECT_EQ(solution.canAliceWin(nums), false);
}

TEST(SolutionTest, Test2) {
    Solution solution;

    vector<int> nums = {1,2,3,4,5,14};
    EXPECT_EQ(solution.canAliceWin(nums), true);
}

TEST(SolutionTest, Test3) {
    Solution solution;

    vector<int> nums = {5,5,5,25};
    EXPECT_EQ(solution.canAliceWin(nums), true);
}

TEST(SolutionTest, Test4) {
    Solution solution;

    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12};
    EXPECT_EQ(solution.canAliceWin(nums), true);
}