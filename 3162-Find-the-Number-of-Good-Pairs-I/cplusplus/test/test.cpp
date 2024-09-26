#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Example, SimpleTest) {
    Solution solution;

    vector<int> nums1 = {1,3,4};
    vector<int> nums2 = {1,3,4};
    int k = 1;

    int expected = 5;
    int output = solution.numberOfPairs(nums1, nums2, k);
    EXPECT_EQ(output, expected);
}

TEST(Example, SimpleTest2) {
    Solution solution;

    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {1,2,3,4,5};
    int k = 1;

    int expected = 10;
    int output = solution.numberOfPairs(nums1, nums2, k);
    EXPECT_EQ(output, expected);
}