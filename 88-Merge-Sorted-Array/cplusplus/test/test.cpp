#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(MergeSortedArray, Example1) {
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    s.merge(nums1, 3, nums2, 3);
    EXPECT_EQ(nums1[0], 1);
    EXPECT_EQ(nums1[1], 2);
    EXPECT_EQ(nums1[2], 2);
    EXPECT_EQ(nums1[3], 3);
    EXPECT_EQ(nums1[4], 5);
    EXPECT_EQ(nums1[5], 6);
}

TEST(MergeSortedArray, Example2) {
    Solution s;
    vector<int> nums1 = {1};
    vector<int> nums2 = {};
    s.merge(nums1, 1, nums2, 0);
    EXPECT_EQ(nums1[0], 1);
}

TEST(MergeSortedArray, Example3) {
    Solution s;
    vector<int> nums1 = {0};
    vector<int> nums2 = {1};
    s.merge(nums1, 0, nums2, 1);
    EXPECT_EQ(nums1[0], 1);
}

TEST(MergeSortedArray, Example4) {
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {4, 5, 6};
    s.merge(nums1, 3, nums2, 3);
    EXPECT_EQ(nums1[0], 1);
    EXPECT_EQ(nums1[1], 2);
    EXPECT_EQ(nums1[2], 3);
    EXPECT_EQ(nums1[3], 4);
    EXPECT_EQ(nums1[4], 5);
    EXPECT_EQ(nums1[5], 6);
}

TEST(MergeSortedArray, Example5) {
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {1, 2, 3};
    s.merge(nums1, 3, nums2, 3);
    EXPECT_EQ(nums1[0], 1);
    EXPECT_EQ(nums1[1], 1);
    EXPECT_EQ(nums1[2], 2);
    EXPECT_EQ(nums1[3], 2);
    EXPECT_EQ(nums1[4], 3);
    EXPECT_EQ(nums1[5], 3);
}

TEST(MergeSortedArray, Example6) {
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {4, 5, 6};
    s.merge(nums1, 3, nums2, 0);
    EXPECT_EQ(nums1[0], 1);
    EXPECT_EQ(nums1[1], 2);
    EXPECT_EQ(nums1[2], 3);
    EXPECT_EQ(nums1[3], 0);
    EXPECT_EQ(nums1[4], 0);
    EXPECT_EQ(nums1[5], 0);
}