#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ConvertDateToBinary, Example1) {
    Solution s;
    string date = "2080-02-29";
    string expected = "100000100000-10-11101";
    string result = s.convertDateToBinary(date);
    ASSERT_EQ(expected, result);
}

TEST(ConvertDateToBinary, Example2) {
    Solution s;
    string date = "1900-01-01";
    string expected = "11101101100-1-1";
    string result = s.convertDateToBinary(date);
    ASSERT_EQ(expected, result);
}

TEST(ConvertDateToBinary, Example3) {
    Solution s;
    string date = "2020-12-31";
    string expected = "11111100100-1100-11111";
    string result = s.convertDateToBinary(date);
    ASSERT_EQ(expected, result);
}

TEST(ConvertDateToBinary, Example4) {
    Solution s;
    string date = "2021-01-01";
    string expected = "11111100101-1-1";
    string result = s.convertDateToBinary(date);
    ASSERT_EQ(expected, result);
}

TEST(ConvertDateToBinary, Example5) {
    Solution s;
    string date = "2021-12-31";
    string expected = "11111100101-1100-11111";
    string result = s.convertDateToBinary(date);
    ASSERT_EQ(expected, result);
}