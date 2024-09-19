#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(FindTheKeyOfTheNumbers, Example1) {
    Solution s;
    int num1 = 1234, num2 = 5678, num3 = 9101;
    int expected = 1101;
    int result = s.generateKey(num1, num2, num3);
    ASSERT_EQ(expected, result);
}

TEST(FindTheKeyOfTheNumbers, Example2) {
    Solution s;
    int num1 = 4321, num2 = 8765, num3 = 9101;
    int expected = 4101;
    int result = s.generateKey(num1, num2, num3);
    ASSERT_EQ(expected, result);
}

TEST(FindTheKeyOfTheNumbers, Example3) {
    Solution s;
    int num1 = 987, num2 = 879, num3 = 798;
    int expected = 777;
    int result = s.generateKey(num1, num2, num3);
    ASSERT_EQ(expected, result);
}

TEST(FindTheKeyOfTheNumbers, Example4) {
    Solution s;
    int num1 = 123, num2 = 456, num3 = 789;
    int expected = 123;
    int result = s.generateKey(num1, num2, num3);
    ASSERT_EQ(expected, result);
}

TEST(FindTheKeyOfTheNumbers, Example5) {
    Solution s;
    int num1 = 1, num2 = 2, num3 = 3;
    int expected = 1;
    int result = s.generateKey(num1, num2, num3);
    ASSERT_EQ(expected, result);
}

TEST(FindTheKeyOfTheNumbers, Example6) {
    Solution s;
    int num1 = 1, num2 = 10, num3 = 1000;
    int expected = 0;
    int result = s.generateKey(num1, num2, num3);
    ASSERT_EQ(expected, result);
}


