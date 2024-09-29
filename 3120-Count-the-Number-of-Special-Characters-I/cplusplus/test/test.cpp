#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    Solution solution;
    string word = "aaAbcBC";
    int expected = 3;
    int result = solution.numberOfSpecialChars(word);
    ASSERT_EQ(expected, result);
}

TEST(Solution, Test2) {
    Solution solution;
    string word = "abc";
    int expected = 0;
    int result = solution.numberOfSpecialChars(word);
    ASSERT_EQ(expected, result);
}

TEST(Solution, Test3) {
    Solution solution;
    string word = "abBCab";
    int expected = 1;
    int result = solution.numberOfSpecialChars(word);
    ASSERT_EQ(expected, result);
}