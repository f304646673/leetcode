#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(HappyNumber, Example1)
{
    Solution s;
    int n = 19;
    bool expected = true;
    bool result = s.isHappy(n);
    EXPECT_EQ(expected, result);
}

TEST(HappyNumber, Example2)
{
    Solution s;
    int n = 2;
    bool expected = false;
    bool result = s.isHappy(n);
    EXPECT_EQ(expected, result);
}

TEST(HappyNumber, Example3)
{
    Solution s;
    int n = 1;
    bool expected = true;
    bool result = s.isHappy(n);
    EXPECT_EQ(expected, result);
}

TEST(HappyNumber, Example4)
{
    Solution s;
    int n = 7;
    bool expected = true;
    bool result = s.isHappy(n);
    EXPECT_EQ(expected, result);
}

TEST(HappyNumber, Example5)
{
    Solution s;
    int n = 1111111;
    bool expected = true;
    bool result = s.isHappy(n);
    EXPECT_EQ(expected, result);
}

TEST(HappyNumber, Example6)
{
    Solution s;
    int n = 11111111;
    bool expected = false;
    bool result = s.isHappy(n);
    EXPECT_EQ(expected, result);
}

TEST(HappyNumber, Example7)
{
    Solution s;
    int n = 111111111;
    bool expected = false;
    bool result = s.isHappy(n);
    EXPECT_EQ(expected, result);
}
