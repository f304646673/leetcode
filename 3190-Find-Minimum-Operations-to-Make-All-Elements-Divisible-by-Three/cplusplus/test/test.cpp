#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(LeetCode_3190, minimumOperations) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int result = s.minimumOperations(nums);
    ASSERT_EQ(result, 4);
}

TEST(LeetCode_3190, minimumOperations_2) {
    Solution s;
    vector<int> nums = {3, 2, 2, 4};
    int result = s.minimumOperations(nums);
    ASSERT_EQ(result, 3);
}

TEST(LeetCode_3190, minimumOperations_3) {
    Solution s;
    vector<int> nums = {2, 2, 2, 2, 2};
    int result = s.minimumOperations(nums);
    ASSERT_EQ(result, 5);
}