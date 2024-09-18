#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(NumberOf1Bits, Example1)
{
    Solution s;
    int n = 00000000000000000000000000001011;
    int expected = 3;
    int result = s.hammingWeight(n);
    EXPECT_EQ(expected, result);
}

TEST(NumberOf1Bits, Example2)
{
    Solution s;
    int n = 00000000000000000000000010000000;
    int expected = 1;
    int result = s.hammingWeight(n);
    EXPECT_EQ(expected, result);
}

TEST(NumberOf1Bits, Example3)
{
    Solution s;
    int n = 11;
    int expected = 3;
    int result = s.hammingWeight(n);
    EXPECT_EQ(expected, result);
}

TEST(NumberOf1Bits, Example4)
{
    Solution s;
    int n = 128;
    int expected = 1;
    int result = s.hammingWeight(n);
    EXPECT_EQ(expected, result);
}

TEST(NumberOf1Bits, Example5)
{
    Solution s;
    int n = 4294967293;
    int expected = 31;
    int result = s.hammingWeight(n);
    EXPECT_EQ(expected, result);
}

TEST(NumberOf1Bits, Example6)
{
    Solution s;
    int n = 4294967295;
    int expected = 32;
    int result = s.hammingWeight(n);
    EXPECT_EQ(expected, result);
}


