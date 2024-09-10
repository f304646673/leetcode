#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Sqrt, Example1) {
    Solution s;
    int result = s.mySqrt(4);
    EXPECT_EQ(result, 2);
}

TEST(Sqrt, Example2) {
    Solution s;
    int result = s.mySqrt(8);
    EXPECT_EQ(result, 2);
}

TEST(Sqrt, Example3) {
    Solution s;
    int result = s.mySqrt(9);
    EXPECT_EQ(result, 3);
}

TEST(Sqrt, Example4) {
    Solution s;
    int result = s.mySqrt(10);
    EXPECT_EQ(result, 3);
}

TEST(Sqrt, Example5) {
    Solution s;
    int result = s.mySqrt(16);
    EXPECT_EQ(result, 4);
}

TEST(Sqrt, Example6) {
    Solution s;
    int result = s.mySqrt(5);
    EXPECT_EQ(result, 2);
}

TEST(Sqrt, Example7) {
    Solution s;
    int result = s.mySqrt(1);
    EXPECT_EQ(result, 1);
}

TEST(Sqrt, Example8) {
    Solution s;
    int result = s.mySqrt(2147395599);
    EXPECT_EQ(result, 46339);
}