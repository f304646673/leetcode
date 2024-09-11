#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(MajorityElement, Example1) {
    Solution s;
    vector<int> nums = {3, 2, 3};
    int result = s.majorityElement(nums);
    EXPECT_EQ(result, 3);
}

TEST(MajorityElement, Example2) {
    Solution s;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = s.majorityElement(nums);
    EXPECT_EQ(result, 2);
}

TEST(MajorityElement, Example3) {
    Solution s;
    vector<int> nums = {1};
    int result = s.majorityElement(nums);
    EXPECT_EQ(result, 1);
}

TEST(MajorityElement, Example4) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int result = s.majorityElement(nums);
    EXPECT_EQ(result, 1);
}

TEST(MajorityElement, Example5) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int result = s.majorityElement(nums);
    EXPECT_EQ(result, 2);
}

TEST(MajorityElement, Example6) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int result = s.majorityElement(nums);
    EXPECT_EQ(result, 3);
}
