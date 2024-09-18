#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ReverseBits, Example1)
{
    Solution s;
    uint32_t n = 43261596;
    uint32_t expected = 964176192;
    uint32_t result = s.reverseBits(n);
    EXPECT_EQ(expected, result);
}

TEST(ReverseBits, Example2)
{
    Solution s;
    uint32_t n = 4294967293;
    uint32_t expected = 3221225471;
    uint32_t result = s.reverseBits(n);
    EXPECT_EQ(expected, result);
}

TEST(ReverseBits, Example3)
{
    Solution s;
    uint32_t n = 0;
    uint32_t expected = 0;
    uint32_t result = s.reverseBits(n);
    EXPECT_EQ(expected, result);
}

TEST(ReverseBits, Example4)
{
    Solution s;
    uint32_t n = 1;
    uint32_t expected = 2147483648;
    uint32_t result = s.reverseBits(n);
    EXPECT_EQ(expected, result);
}

TEST(ReverseBits, Example5)
{
    Solution s;
    uint32_t n = 2147483648;
    uint32_t expected = 1;
    uint32_t result = s.reverseBits(n);
    EXPECT_EQ(expected, result);
}

TEST(ReverseBits, Example6)
{
    Solution s;
    uint32_t n = 4294967295;
    uint32_t expected = 4294967295;
    uint32_t result = s.reverseBits(n);
    EXPECT_EQ(expected, result);
}
