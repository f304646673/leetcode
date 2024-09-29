#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    Solution solution;
    string s = "abc";
    string t = "bac";
    int expected = 2;
    int result = solution.findPermutationDifference(s, t);
    ASSERT_EQ(expected, result);
}

TEST(Solution, Test2) {
    Solution solution;
    string s = "abc";
    string t = "abc";
    int expected = 0;
    int result = solution.findPermutationDifference(s, t);
    ASSERT_EQ(expected, result);
}

TEST(Solution, Test3) {
    Solution solution;
    string s = "abcde";
    string t = "edbac";
    int expected = 12;
    int result = solution.findPermutationDifference(s, t);
    ASSERT_EQ(expected, result);
}
