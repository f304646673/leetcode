#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ValidParentheses, Example1) {
    Solution s;
    string input = "()";
    bool expected = true;
    bool result = s.isValid(input);
    ASSERT_EQ(expected, result);
}

TEST(ValidParentheses, Example2) {
    Solution s;
    string input = "()[]{}";
    bool expected = true;
    bool result = s.isValid(input);
    ASSERT_EQ(expected, result);
}

TEST(ValidParentheses, Example3) {
    Solution s;
    string input = "(]";
    bool expected = false;
    bool result = s.isValid(input);
    ASSERT_EQ(expected, result);
}

TEST(ValidParentheses, Example4) {
    Solution s;
    string input = "([)]";
    bool expected = false;
    bool result = s.isValid(input);
    ASSERT_EQ(expected, result);
}

TEST(ValidParentheses, Example5) {
    Solution s;
    string input = "{[]}";
    bool expected = true;
    bool result = s.isValid(input);
    ASSERT_EQ(expected, result);
}

TEST(ValidParentheses, Example6) {
    Solution s;
    string input = "]";
    bool expected = false;
    bool result = s.isValid(input);
    ASSERT_EQ(expected, result);
}

TEST(ValidParentheses, Example7) {
    Solution s;
    string input = "[";
    bool expected = false;
    bool result = s.isValid(input);
    ASSERT_EQ(expected, result);
}
