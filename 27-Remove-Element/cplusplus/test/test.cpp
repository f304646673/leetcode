#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(RemoveElement, Example1) {
    Solution s;
    vector<int> nums = {3, 2, 2, 3};
    int result = s.removeElement(nums, 3);
    EXPECT_EQ(result, 2);
    EXPECT_EQ(nums[0], 2);
    EXPECT_EQ(nums[1], 2);
}

TEST(RemoveElement, Example2) {
    Solution s;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int result = s.removeElement(nums, 2);
    EXPECT_EQ(result, 5);
    EXPECT_EQ(nums[0], 0);
    EXPECT_EQ(nums[1], 1);
    EXPECT_EQ(nums[2], 3);
    EXPECT_EQ(nums[3], 0);
    EXPECT_EQ(nums[4], 4);
}

TEST(RemoveElement, Example3) {
    Solution s;
    vector<int> nums = {1};
    int result = s.removeElement(nums, 1);
    EXPECT_EQ(result, 0);
}

TEST(RemoveElement, Example4) {
    Solution s;
    vector<int> nums = {1};
    int result = s.removeElement(nums, 2);
    EXPECT_EQ(result, 1);
    EXPECT_EQ(nums[0], 1);
}

TEST(RemoveElement, Example5) {
    Solution s;
    vector<int> nums = {1, 1, 1, 1, 1, 1};
    int result = s.removeElement(nums, 1);
    EXPECT_EQ(result, 0);
}

TEST(RemoveElement, Example6) {
    Solution s;
    vector<int> nums = {1, 1, 1, 1, 1, 1};
    int result = s.removeElement(nums, 2);
    EXPECT_EQ(result, 6);
    EXPECT_EQ(nums[0], 1);
    EXPECT_EQ(nums[1], 1);
    EXPECT_EQ(nums[2], 1);
    EXPECT_EQ(nums[3], 1);
    EXPECT_EQ(nums[4], 1);
    EXPECT_EQ(nums[5], 1);
}
