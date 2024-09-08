#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(RomanToInteger, Test1) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("III"), 3);
}

TEST(RomanToInteger, Test2) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("IV"), 4);
}

TEST(RomanToInteger, Test3) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("IX"), 9);
}

TEST(RomanToInteger, Test4) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("LVIII"), 58);
}

TEST(RomanToInteger, Test5) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("MCMXCIV"), 1994);
}