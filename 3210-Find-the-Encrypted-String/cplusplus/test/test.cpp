#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(test, case1) {
    Solution s;
    string result = s.getEncryptedString("abc", 1);
    EXPECT_EQ(result, "bca");
}

TEST(test, case2) {
    Solution s;
    string result = s.getEncryptedString("abc", 2);
    EXPECT_EQ(result, "cab");
}

TEST(test, case3) {
    Solution s;
    string result = s.getEncryptedString("abc", 3);
    EXPECT_EQ(result, "abc");
}

TEST(test, case4) {
    Solution s;
    string result = s.getEncryptedString("dart", 3);
    EXPECT_EQ(result, "tdar");
}

TEST(test, case5) {
    Solution s;
    string result = s.getEncryptedString("aaa", 1);
    EXPECT_EQ(result, "aaa");
}