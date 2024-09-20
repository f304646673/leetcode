#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SolutionTest, Example1)
{
    Solution solution;
    vector<int> nums = {2,1,3,5,6};
    int k = 5;
    int multiplier = 2;
    vector<int> expected = {8, 4, 6, 5, 6};
    ASSERT_EQ(solution.getFinalState(nums, k, multiplier), expected);
}

TEST(SolutionTest, Example2)
{
    Solution solution;
    vector<int> nums = {1,2};
    int k = 3;
    int multiplier = 4;
    vector<int> expected = {16, 8};
    ASSERT_EQ(solution.getFinalState(nums, k, multiplier), expected);
}

