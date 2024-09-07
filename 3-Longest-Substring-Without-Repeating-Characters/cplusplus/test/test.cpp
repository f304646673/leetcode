#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(LengthOfLongestSubstringTest, Example1) {
    Solution s;
    string input = "abcabcbb";
    int output = 3;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}

TEST(LengthOfLongestSubstringTest, Example2) {
    Solution s;
    string input = "bbbbb";
    int output = 1;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}

TEST(LengthOfLongestSubstringTest, Example3) {
    Solution s;
    string input = "pwwkew";
    int output = 3;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}

TEST(LengthOfLongestSubstringTest, Example4) {
    Solution s;
    string input = "";
    int output = 0;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}

TEST(LengthOfLongestSubstringTest, Example5) {
    Solution s;
    string input = " ";
    int output = 1;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}

TEST(LengthOfLongestSubstringTest, Example6) {
    Solution s;
    string input = "au";
    int output = 2;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}

TEST(LengthOfLongestSubstringTest, Example7) {
    Solution s;
    string input = "dvdf";
    int output = 3;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}

TEST(LengthOfLongestSubstringTest, Example8) {
    Solution s;
    string input = "ynyo";
    int output = 3;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}

TEST(LengthOfLongestSubstringTest, Example9) {
    Solution s;
    string input = "abcdwwwabcdef";
    int output = 7;
    EXPECT_EQ(s.lengthOfLongestSubstring(input), output);
}