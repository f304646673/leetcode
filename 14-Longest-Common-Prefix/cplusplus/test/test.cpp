#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(LongestCommonPrefix, Example1) {
    Solution s;
    vector<string> strs = {"flower", "flow", "flight"};
    string expected = "fl";
    string result = s.longestCommonPrefix(strs);
    ASSERT_EQ(expected, result);
}

TEST(LongestCommonPrefix, Example2) {
    Solution s;
    vector<string> strs = {"dog", "racecar", "car"};
    string expected = "";
    string result = s.longestCommonPrefix(strs);
    ASSERT_EQ(expected, result);
}

TEST(LongestCommonPrefix, Example3) {
    Solution s;
    vector<string> strs = {"", "b"};
    string expected = "";
    string result = s.longestCommonPrefix(strs);
    ASSERT_EQ(expected, result);
}

TEST(LongestCommonPrefix, Example4) {
    Solution s;
    vector<string> strs = {"a"};
    string expected = "a";
    string result = s.longestCommonPrefix(strs);
    ASSERT_EQ(expected, result);
}

TEST(LongestCommonPrefix, Example5) {
    Solution s;
    vector<string> strs = {"a", "a"};
    string expected = "a";
    string result = s.longestCommonPrefix(strs);
    ASSERT_EQ(expected, result);
}

TEST(LongestCommonPrefix, Example6) {
    Solution s;
    vector<string> strs = {"a", "b"};
    string expected = "";
    string result = s.longestCommonPrefix(strs);
    ASSERT_EQ(expected, result);
}
