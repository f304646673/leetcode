#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ValidAnagram, Example1) {
    Solution s;
    string s1 = "anagram";
    string t1 = "nagaram";
    EXPECT_TRUE(s.isAnagram(s1, t1));
}

TEST(ValidAnagram, Example2) {
    Solution s;
    string s2 = "rat";
    string t2 = "car";
    EXPECT_FALSE(s.isAnagram(s2, t2));
}

TEST(ValidAnagram, Example3) {
    Solution s;
    string s3 = "a";
    string t3 = "ab";
    EXPECT_FALSE(s.isAnagram(s3, t3));
}

TEST(ValidAnagram, Example4) {
    Solution s;
    string s4 = "a";
    string t4 = "a";
    EXPECT_TRUE(s.isAnagram(s4, t4));
}

TEST(ValidAnagram, Example5) {
    Solution s;
    string s5 = "a";
    string t5 = "b";
    EXPECT_FALSE(s.isAnagram(s5, t5));
}

TEST(ValidAnagram, Example6) {
    Solution s;
    string s6 = "a";
    string t6 = "a";
    EXPECT_TRUE(s.isAnagram(s6, t6));
}
