#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(PlusOne, Example1) {
    Solution s;
    vector<int> digits = {1, 2, 3};
    vector<int> result = s.plusOne(digits);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 2);
    EXPECT_EQ(result[2], 4);
}

TEST(PlusOne, Example2) {
    Solution s;
    vector<int> digits = {4, 3, 2, 1};
    vector<int> result = s.plusOne(digits);
    EXPECT_EQ(result[0], 4);
    EXPECT_EQ(result[1], 3);
    EXPECT_EQ(result[2], 2);
    EXPECT_EQ(result[3], 2);
}

TEST(PlusOne, Example3) {
    Solution s;
    vector<int> digits = {0};
    vector<int> result = s.plusOne(digits);
    EXPECT_EQ(result[0], 1);
}

TEST(PlusOne, Example4) {
    Solution s;
    vector<int> digits = {9};
    vector<int> result = s.plusOne(digits);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 0);
}

TEST(PlusOne, Example5) {
    Solution s;
    vector<int> digits = {9, 9};
    vector<int> result = s.plusOne(digits);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 0);
    EXPECT_EQ(result[2], 0);
}

TEST(PlusOne, Example6) {
    Solution s;
    vector<int> digits = {9, 9, 9};
    vector<int> result = s.plusOne(digits);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 0);
    EXPECT_EQ(result[2], 0);
    EXPECT_EQ(result[3], 0);
}