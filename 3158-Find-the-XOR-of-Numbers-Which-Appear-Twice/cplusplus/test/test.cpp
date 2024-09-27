#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(LeetCode, test1) {
    Solution solution;
    vector<int> nums = {1, 2, 1, 3};
    EXPECT_EQ(solution.duplicateNumbersXOR(nums), 1);
}

TEST(LeetCode, test2) {
    Solution solution;
    vector<int> nums = {1, 2, 2, 1};
    EXPECT_EQ(solution.duplicateNumbersXOR(nums), 3);
}

TEST(LeetCode, test3) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    EXPECT_EQ(solution.duplicateNumbersXOR(nums), 0);
}