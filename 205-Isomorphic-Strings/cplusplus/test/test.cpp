#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(IsomorphicStrings, Test_01) {
    Solution s;
    string s1 = "egg";
    string s2 = "add";
    bool result = s.isIsomorphic(s1, s2);
    EXPECT_EQ(result, true);
}

TEST(IsomorphicStrings, Test_02) {
    Solution s;
    string s1 = "foo";
    string s2 = "bar";
    bool result = s.isIsomorphic(s1, s2);
    EXPECT_EQ(result, false);
}

TEST(IsomorphicStrings, Test_03) {
    Solution s;
    string s1 = "paper";
    string s2 = "title";
    bool result = s.isIsomorphic(s1, s2);
    EXPECT_EQ(result, true);
}

TEST(IsomorphicStrings, Test_04) {
    Solution s;
    string s1 = "ab";
    string s2 = "aa";
    bool result = s.isIsomorphic(s1, s2);
    EXPECT_EQ(result, false);
}

TEST(IsomorphicStrings, Test_05) {
    Solution s;
    string s1 = "ab";
    string s2 = "ca";
    bool result = s.isIsomorphic(s1, s2);
    EXPECT_EQ(result, true);
}

TEST(IsomorphicStrings, Test_06) {
    Solution s;
    string s1 = "ab";
    string s2 = "cd";
    bool result = s.isIsomorphic(s1, s2);
    EXPECT_EQ(result, true);
}