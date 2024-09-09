#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SearchInsertPosition, Example1) {
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int result = s.searchInsert(nums, target);
    EXPECT_EQ(result, 2);
}

TEST(SearchInsertPosition, Example2) {
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    int result = s.searchInsert(nums, target);
    EXPECT_EQ(result, 1);
}

TEST(SearchInsertPosition, Example3) {
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;
    int result = s.searchInsert(nums, target);
    EXPECT_EQ(result, 4);
}

TEST(SearchInsertPosition, Example4) {
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 0;
    int result = s.searchInsert(nums, target);
    EXPECT_EQ(result, 0);
}

TEST(SearchInsertPosition, Example5) {
    Solution s;
    vector<int> nums = {1};
    int target = 0;
    int result = s.searchInsert(nums, target);
    EXPECT_EQ(result, 0);
}

TEST(SearchInsertPosition, Example6) {
    Solution s;
    vector<int> nums = {1};
    int target = 1;
    int result = s.searchInsert(nums, target);
    EXPECT_EQ(result, 0);
}