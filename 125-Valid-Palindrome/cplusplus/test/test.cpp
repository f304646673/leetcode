#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ValidPalindrome, Example1) {
    Solution s;
    string s1 = " ";
    bool result = s.isPalindrome(s1);
    EXPECT_EQ(result, true);
}

TEST(ValidPalindrome, Example2) {
    Solution s;
    string s1 = "A man, a plan, a canal: Panama";
    bool result = s.isPalindrome(s1);
    EXPECT_EQ(result, true);
}

TEST(ValidPalindrome, Example3) {
    Solution s;
    string s1 = "race a car";
    bool result = s.isPalindrome(s1);
    EXPECT_EQ(result, false);
}

TEST(ValidPalindrome, Example4) {
    Solution s;
    string s1 = "0P";
    bool result = s.isPalindrome(s1);
    EXPECT_EQ(result, false);
}

TEST(ValidPalindrome, Example5) {
    Solution s;
    string s1 = ".,";
    bool result = s.isPalindrome(s1);
    EXPECT_EQ(result, true);
}