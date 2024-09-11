#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SingleNumber, Example1) {
    Solution s;
    vector<int> nums = {2, 2, 1};
    int result = s.singleNumber(nums);
    EXPECT_EQ(result, 1);
}

TEST(SingleNumber, Example2) {
    Solution s;
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = s.singleNumber(nums);
    EXPECT_EQ(result, 4);
}

TEST(SingleNumber, Example3) {
    Solution s;
    vector<int> nums = {1};
    int result = s.singleNumber(nums);
    EXPECT_EQ(result, 1);
}

TEST(SingleNumber, Example4) {
    Solution s;
    vector<int> nums = {2, 2, 1, 1, 3};
    int result = s.singleNumber(nums);
    EXPECT_EQ(result, 3);
}

TEST(SingleNumber, Example5) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int result = s.singleNumber(nums);
    EXPECT_EQ(result, 9);
}