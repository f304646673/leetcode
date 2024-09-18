#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ExcelSheetColumnNumber, Example1)
{
    Solution s;
    string columnTitle = "A";
    int expected = 1;
    int result = s.titleToNumber(columnTitle);
    EXPECT_EQ(expected, result);
}

TEST(ExcelSheetColumnNumber, Example2)
{
    Solution s;
    string columnTitle = "AB";
    int expected = 28;
    int result = s.titleToNumber(columnTitle);
    EXPECT_EQ(expected, result);
}

TEST(ExcelSheetColumnNumber, Example3)
{
    Solution s;
    string columnTitle = "ZY";
    int expected = 701;
    int result = s.titleToNumber(columnTitle);
    EXPECT_EQ(expected, result);
}

TEST(ExcelSheetColumnNumber, Example4)
{
    Solution s;
    string columnTitle = "FXSHRXW";
    int expected = 2147483647;
    int result = s.titleToNumber(columnTitle);
    EXPECT_EQ(expected, result);
}

TEST(ExcelSheetColumnNumber, Example5)
{
    Solution s;
    string columnTitle = "AZ";
    int expected = 52;
    int result = s.titleToNumber(columnTitle);
    EXPECT_EQ(expected, result);
}

TEST(ExcelSheetColumnNumber, Example6)
{
    Solution s;
    string columnTitle = "AAA";
    int expected = 703;
    int result = s.titleToNumber(columnTitle);
    EXPECT_EQ(expected, result);
}