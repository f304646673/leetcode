#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ContainsDuplicate, Test_01) {
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    bool result = s.containsDuplicate(nums);
    EXPECT_EQ(result, true);
}

TEST(ContainsDuplicate, Test_02) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    bool result = s.containsDuplicate(nums);
    EXPECT_EQ(result, false);
}

TEST(ContainsDuplicate, Test_03) {
    Solution s;
    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    bool result = s.containsDuplicate(nums);
    EXPECT_EQ(result, true);
}

TEST(ContainsDuplicate, Test_04) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool result = s.containsDuplicate(nums);
    EXPECT_EQ(result, false);
}

TEST(ContainsDuplicate, Test_05) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    bool result = s.containsDuplicate(nums);
    EXPECT_EQ(result, true);
}

TEST(ContainsDuplicate, Test_06) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2};
    bool result = s.containsDuplicate(nums);
    EXPECT_EQ(result, true);
}