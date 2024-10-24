#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SummaryRanges, Test0) {
    Solution s;
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> res = s.summaryRanges(nums);
    vector<string> expected = {"0->2", "4->5", "7"};
    ASSERT_EQ(res, expected);
}

TEST(SummaryRanges, Test1) {
    Solution s;
    vector<int> nums = {0, 2, 3, 4, 6, 8, 9};
    vector<string> res = s.summaryRanges(nums);
    vector<string> expected = {"0", "2->4", "6", "8->9"};
    ASSERT_EQ(res, expected);
}

TEST(SummaryRanges, Test2) {
    Solution s;
    vector<int> nums = {};
    vector<string> res = s.summaryRanges(nums);
    vector<string> expected = {};
    ASSERT_EQ(res, expected);
}

TEST(SummaryRanges, Test3) {
    Solution s;
    vector<int> nums = {0};
    vector<string> res = s.summaryRanges(nums);
    vector<string> expected = {"0"};
    ASSERT_EQ(res, expected);
}

TEST(SummaryRanges, Test4) {
    Solution s;
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<string> res = s.summaryRanges(nums);
    vector<string> expected = {"0->9"};
    ASSERT_EQ(res, expected);
}

TEST(SummaryRanges, Test5) {
    Solution s;
    vector<int> nums = {0, 1, 2, 4, 5, 6, 8, 9};
    vector<string> res = s.summaryRanges(nums);
    vector<string> expected = {"0->2", "4->6", "8->9"};
    ASSERT_EQ(res, expected);
}

TEST(SummaryRanges, Test6) {
    Solution s;
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 8, 9};
    vector<string> res = s.summaryRanges(nums);
    vector<string> expected = {"0->6", "8->9"};
    ASSERT_EQ(res, expected);
}

TEST(SummaryRanges, Test7) {
    Solution s;
    vector<int> nums = {-2147483648, -2147483647, 2147483647};
    vector<string> res = s.summaryRanges(nums);
    vector<string> expected = {"-2147483648->-2147483647", "2147483647"};
    ASSERT_EQ(res, expected);
}