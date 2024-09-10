#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(AddBinary, Example1) {
    Solution s;
    string a = "11";
    string b = "1";
    string result = s.addBinary(a, b);
    EXPECT_EQ(result, "100");
}

TEST(AddBinary, Example2) {
    Solution s;
    string a = "1010";
    string b = "1011";
    string result = s.addBinary(a, b);
    EXPECT_EQ(result, "10101");
}

TEST(AddBinary, Example3) {
    Solution s;
    string a = "0";
    string b = "0";
    string result = s.addBinary(a, b);
    EXPECT_EQ(result, "0");
}

TEST(AddBinary, Example4) {
    Solution s;
    string a = "1";
    string b = "0";
    string result = s.addBinary(a, b);
    EXPECT_EQ(result, "1");
}

TEST(AddBinary, Example5) {
    Solution s;
    string a = "0";
    string b = "1";
    string result = s.addBinary(a, b);
    EXPECT_EQ(result, "1");
}

TEST(AddBinary, Example6) {
    Solution s;
    string a = "1";
    string b = "1";
    string result = s.addBinary(a, b);
    EXPECT_EQ(result, "10");
}