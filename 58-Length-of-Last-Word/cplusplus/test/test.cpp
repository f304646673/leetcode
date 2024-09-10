#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(LengthofLastWord, Example1) {
    Solution s;
    string str = "Hello World";
    int result = s.lengthOfLastWord(str);
    EXPECT_EQ(result, 5);
}

TEST(LengthofLastWord, Example2) {
    Solution s;
    string str = " ";
    int result = s.lengthOfLastWord(str);
    EXPECT_EQ(result, 0);
}

TEST(LengthofLastWord, Example3) {
    Solution s;
    string str = "a ";
    int result = s.lengthOfLastWord(str);
    EXPECT_EQ(result, 1);
}

TEST(LengthofLastWord, Example4) {
    Solution s;
    string str = "   fly me   to   the moon  ";
    int result = s.lengthOfLastWord(str);
    EXPECT_EQ(result, 4);
}

TEST(LengthofLastWord, Example5) {
    Solution s;
    string str = "luffy is still joyboy";
    int result = s.lengthOfLastWord(str);
    EXPECT_EQ(result, 6);
}

TEST(LengthofLastWord, Example6) {
    Solution s;
    string str = "a";
    int result = s.lengthOfLastWord(str);
    EXPECT_EQ(result, 1);
}