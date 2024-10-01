#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    Solution solution;
    string s = "abc";
    int result = solution.scoreOfString(s);
    ASSERT_EQ(result, 2);
}

TEST(Solution, Test2) {
    Solution solution;
    string s = "a";
    int result = solution.scoreOfString(s);
    ASSERT_EQ(result, 0);
}

TEST(Solution, Test3) {
    Solution solution;
    string s = "abcdefghijklmnopqrstuvwxyz";
    int result = solution.scoreOfString(s);
    ASSERT_EQ(result, 25);
}

TEST(Solution, Test4) {
    Solution solution;
    string s = "cba";
    int result = solution.scoreOfString(s);
    ASSERT_EQ(result, 2);
}

TEST(Solution, Test5) {
    Solution solution;
    string s = "ab";
    int result = solution.scoreOfString(s);
    ASSERT_EQ(result, 1);
}

TEST(Solution, Test6) {
    Solution solution;
    string s = "aabbcc";
    int result = solution.scoreOfString(s);
    ASSERT_EQ(result, 2);
}