#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(PalindromeNumber, Test1) {
    Solution solution;
    EXPECT_EQ(solution.isPalindrome(121), true);
}

TEST(PalindromeNumber, Test2) {
    Solution solution;
    EXPECT_EQ(solution.isPalindrome(-121), false);
}

TEST(PalindromeNumber, Test3) {
    Solution solution;
    EXPECT_EQ(solution.isPalindrome(10), false);
}

TEST(PalindromeNumber, Test4) {
    Solution solution;
    EXPECT_EQ(solution.isPalindrome(-101), false);
}

TEST(PalindromeNumber, Test5) {
    Solution solution;
    EXPECT_EQ(solution.isPalindrome(0), true);
}

TEST(PalindromeNumber, Test6) {
    Solution solution;
    EXPECT_EQ(solution.isPalindrome(1), true);
}

TEST(PalindromeNumber, Test7) {
    Solution solution;
    EXPECT_EQ(solution.isPalindrome(11), true);
}
