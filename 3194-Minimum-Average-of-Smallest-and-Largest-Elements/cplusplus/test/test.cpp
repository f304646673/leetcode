#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(LeetCode_3194, minimumAverage) {
    Solution s;
    vector<int> nums = {3, 1, 2, 4};
    double result = s.minimumAverage(nums);
    ASSERT_EQ(result, 2.5);
}

TEST(LeetCode_3194, minimumAverage_2) {
    Solution s;
    vector<int> nums = {7, 8, 3, 4, 15, 13, 4, 1};
    double result = s.minimumAverage(nums);
    ASSERT_EQ(result, 5.5);
}

TEST(LeetCode_3194, minimumAverage_3) {
    Solution s;
    vector<int> nums = {1, 9, 8, 3, 10, 5};
    double result = s.minimumAverage(nums);
    ASSERT_EQ(result, 5.5);
}

TEST(LeetCode_3194, minimumAverage_4) {
    Solution s;
    vector<int> nums = {1, 2, 3, 7, 8, 9};
    double result = s.minimumAverage(nums);
    ASSERT_EQ(result, 5.0);
}