#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(PascalTriangleII, Example1) {
    Solution s;
    int rowIndex = 3;
    vector<int> result = s.getRow(rowIndex);
    vector<int> expect = {1, 3, 3, 1};
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangleII, Example2) {
    Solution s;
    int rowIndex = 0;
    vector<int> result = s.getRow(rowIndex);
    vector<int> expect = {1};
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangleII, Example3) {
    Solution s;
    int rowIndex = 1;
    vector<int> result = s.getRow(rowIndex);
    vector<int> expect = {1, 1};
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangleII, Example4) {
    Solution s;
    int rowIndex = 2;
    vector<int> result = s.getRow(rowIndex);
    vector<int> expect = {1, 2, 1};
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangleII, Example5) {
    Solution s;
    int rowIndex = 4;
    vector<int> result = s.getRow(rowIndex);
    vector<int> expect = {1, 4, 6, 4, 1};
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangleII, Example6) {
    Solution s;
    int rowIndex = 5;
    vector<int> result = s.getRow(rowIndex);
    vector<int> expect = {1, 5, 10, 10, 5, 1};
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangleII, Example7) {
    Solution s;
    int rowIndex = 29;
    vector<int> result = s.getRow(rowIndex);
    vector<int> expect = {1, 29, 406, 3654, 23751, 118755, 475020, 1560780, 4292145, 10015005, 20030010, 34597290, 51895935, 67863915, 77558760, 77558760, 67863915, 51895935, 34597290, 20030010, 10015005, 4292145, 1560780, 475020, 118755, 23751, 3654, 406, 29, 1};
    EXPECT_EQ(result, expect);
}