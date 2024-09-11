#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ExcelSheetColumnTitle, Example1) {
    Solution s;
    int n = 1;
    string result = s.convertToTitle(n);
    EXPECT_EQ(result, "A");
}

TEST(ExcelSheetColumnTitle, Example2) {
    Solution s;
    int n = 28;
    string result = s.convertToTitle(n);
    EXPECT_EQ(result, "AB");
}

TEST(ExcelSheetColumnTitle, Example3) {
    Solution s;
    int n = 701;
    string result = s.convertToTitle(n);
    EXPECT_EQ(result, "ZY");
}

TEST(ExcelSheetColumnTitle, Example4) {
    Solution s;
    int n = 2147483647;
    string result = s.convertToTitle(n);
    EXPECT_EQ(result, "FXSHRXW");
}

TEST(ExcelSheetColumnTitle, Example5) {
    Solution s;
    int n = 52;
    string result = s.convertToTitle(n);
    EXPECT_EQ(result, "AZ");
}

TEST(ExcelSheetColumnTitle, Example6) {
    Solution s;
    int n = 53;
    string result = s.convertToTitle(n);
    EXPECT_EQ(result, "BA");
}