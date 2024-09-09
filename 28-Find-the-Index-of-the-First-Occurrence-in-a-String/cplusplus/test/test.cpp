#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(FindtheIndexoftheFirstOccurrenceinaString, Example1) {
    Solution s;
    string haystack = "hello";
    string needle = "ll";
    int result = s.strStr(haystack, needle);
    EXPECT_EQ(result, 2);
}

TEST(FindtheIndexoftheFirstOccurrenceinaString, Example2) {
    Solution s;
    string haystack = "aaaaa";
    string needle = "bba";
    int result = s.strStr(haystack, needle);
    EXPECT_EQ(result, -1);
}

TEST(FindtheIndexoftheFirstOccurrenceinaString, Example3) {
    Solution s;
    string haystack = "";
    string needle = "";
    int result = s.strStr(haystack, needle);
    EXPECT_EQ(result, 0);
}

TEST(FindtheIndexoftheFirstOccurrenceinaString, Example4) {
    Solution s;
    string haystack = "a";
    string needle = "";
    int result = s.strStr(haystack, needle);
    EXPECT_EQ(result, 0);
}

TEST(FindtheIndexoftheFirstOccurrenceinaString, Example5) {
    Solution s;
    string haystack = "";
    string needle = "a";
    int result = s.strStr(haystack, needle);
    EXPECT_EQ(result, -1);
}

TEST(FindtheIndexoftheFirstOccurrenceinaString, Example6) {
    Solution s;
    string haystack = "a";
    string needle = "a";
    int result = s.strStr(haystack, needle);
    EXPECT_EQ(result, 0);
}
