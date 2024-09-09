#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(RemoveDuplicatesfromSortedArray, Example1) {
    Solution s;
    vector<int> nums = {1, 1, 2};
    int result = s.removeDuplicates(nums);
    EXPECT_EQ(result, 2);
    EXPECT_EQ(nums[0], 1);
    EXPECT_EQ(nums[1], 2);
}

TEST(RemoveDuplicatesfromSortedArray, Example2) {
    Solution s;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result = s.removeDuplicates(nums);
    EXPECT_EQ(result, 5);
    EXPECT_EQ(nums[0], 0);
    EXPECT_EQ(nums[1], 1);
    EXPECT_EQ(nums[2], 2);
    EXPECT_EQ(nums[3], 3);
    EXPECT_EQ(nums[4], 4);
}

TEST(RemoveDuplicatesfromSortedArray, Example3) {
    Solution s;
    vector<int> nums = {1, 1, 1};
    int result = s.removeDuplicates(nums);
    EXPECT_EQ(result, 1);
    EXPECT_EQ(nums[0], 1);
}

TEST(RemoveDuplicatesfromSortedArray, Example4) {
    Solution s;
    vector<int> nums = {1, 2, 3};
    int result = s.removeDuplicates(nums);
    EXPECT_EQ(result, 3);
    EXPECT_EQ(nums[0], 1);
    EXPECT_EQ(nums[1], 2);
    EXPECT_EQ(nums[2], 3);
}

TEST(RemoveDuplicatesfromSortedArray, Example5) {
    Solution s;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int result = s.removeDuplicates(nums);
    EXPECT_EQ(result, 3);
    EXPECT_EQ(nums[0], 1);
    EXPECT_EQ(nums[1], 2);
    EXPECT_EQ(nums[2], 3);
}

TEST(RemoveDuplicatesfromSortedArray, Example6) {
    Solution s;
    vector<int> nums = {1, 1, 1, 1, 1, 1};
    int result = s.removeDuplicates(nums);
    EXPECT_EQ(result, 1);
    EXPECT_EQ(nums[0], 1);
}