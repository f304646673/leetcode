#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    ASSERT_TRUE(solution.isArraySpecial(nums));
}

TEST(Solution, Test2) {
    Solution solution;
    vector<int> nums = {2, 2, 2, 2};
    ASSERT_FALSE(solution.isArraySpecial(nums));
}

TEST(Solution, Test3) {
    Solution solution;
    vector<int> nums = {1, 3, 5, 7};
    ASSERT_FALSE(solution.isArraySpecial(nums));
}

TEST(Solution, Test4) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    ASSERT_TRUE(solution.isArraySpecial(nums));
}

TEST(Solution, Test5) {
    Solution solution;
    vector<int> nums = {1};
    ASSERT_TRUE(solution.isArraySpecial(nums));
}

TEST(Solution, Test6) {
    Solution solution;
    vector<int> nums = {2,1,4};
    ASSERT_TRUE(solution.isArraySpecial(nums));
}

TEST(Solution, Test7) {
    Solution solution;
    vector<int> nums = {4,3,1,6};
    ASSERT_FALSE(solution.isArraySpecial(nums));
}