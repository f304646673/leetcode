#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(TwoSum, Example1) {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    EXPECT_EQ(result[0], 0);
    EXPECT_EQ(result[1], 1);
}

TEST(TwoSum, Example2) {
    Solution solution;
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result = solution.twoSum(nums, target);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 2);
}

TEST(TwoSum, Example3) {
    Solution solution;
    vector<int> nums = {3, 3};
    int target = 6;
    vector<int> result = solution.twoSum(nums, target);
    EXPECT_EQ(result[0], 0);
    EXPECT_EQ(result[1], 1);
}