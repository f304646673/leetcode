#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {1, 2, 3, 4};
    int result = solution.addedInteger(nums1, nums2);
    ASSERT_EQ(result, 0);
}

TEST(Solution, Test2) {
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {4, 2, 3, 5};
    int result = solution.addedInteger(nums1, nums2);
    ASSERT_EQ(result, 1);
}

TEST(Solution, Test3) {
    Solution solution;
    vector<int> nums1 = {1, 1, 1, 1};
    vector<int> nums2 = {1, 1, 1, 1};
    int result = solution.addedInteger(nums1, nums2);
    ASSERT_EQ(result, 0);
}

TEST(Solution, Test4) {
    Solution solution;
    vector<int> nums1 = {2, 6, 4};
    vector<int> nums2 = {9, 7, 5};
    int result = solution.addedInteger(nums1, nums2);
    ASSERT_EQ(result, 3);
}

TEST(Solution, Test5) {
    Solution solution;
    vector<int> nums1 = {10};
    vector<int> nums2 = {5};
    int result = solution.addedInteger(nums1, nums2);
    ASSERT_EQ(result, -5);
}

TEST(Solution, Test6) {
    Solution solution;
    vector<int> nums1 = {224,667,24,92,184,809,862,774,755,688,246,32,18,567,726,338,547,586,573,250,399,342,556,310,23,323,550,28,649,269,675,943,630,415,122,238,626,802,465,968,579,290,614,616};
    vector<int> nums2 = {574,226,637,544,561,20,16,110,12,762,614,676,714,956,567,257,311,234,326,790,604,238,618,453,387,850,555,403,602,663,743,655,212,330,80,298,11,6,797,172,538,535,278,931};
    int result = solution.addedInteger(nums1, nums2);
    ASSERT_EQ(result, -12);
}