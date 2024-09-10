#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(MedianofTwoSortedArrays, Example1) {
    Solution s;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    double result = s.findMedianSortedArrays(nums1, nums2);
    EXPECT_EQ(result, 2.0);
}

TEST(MedianofTwoSortedArrays, Example2) {
    Solution s;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    double result = s.findMedianSortedArrays(nums1, nums2);
    EXPECT_EQ(result, 2.5);
}

TEST(MedianofTwoSortedArrays, Example3) {
    Solution s;
    vector<int> nums1 = {0, 0};
    vector<int> nums2 = {0, 0};
    double result = s.findMedianSortedArrays(nums1, nums2);
    EXPECT_EQ(result, 0.0);
}

TEST(MedianofTwoSortedArrays, Example4) {
    Solution s;
    vector<int> nums1 = {};
    vector<int> nums2 = {1};
    double result = s.findMedianSortedArrays(nums1, nums2);
    EXPECT_EQ(result, 1.0);
}

TEST(MedianofTwoSortedArrays, Example5) {
    Solution s;
    vector<int> nums1 = {2};
    vector<int> nums2 = {};
    double result = s.findMedianSortedArrays(nums1, nums2);
    EXPECT_EQ(result, 2.0);
}

TEST(MedianofTwoSortedArrays, Example6) {
    Solution s;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2, 7};
    double result = s.findMedianSortedArrays(nums1, nums2);
    EXPECT_EQ(result, 2.5);
}