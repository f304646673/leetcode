#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(PascalTriangle, Example1) {
    Solution s;
    int numRows = 5;
    vector<vector<int>> result = s.generate(numRows);
    vector<vector<int>> expect = {
        {1},
        {1, 1},
        {1, 2, 1},
        {1, 3, 3, 1},
        {1, 4, 6, 4, 1}
    };
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangle, Example2) {
    Solution s;
    int numRows = 1;
    vector<vector<int>> result = s.generate(numRows);
    vector<vector<int>> expect = {
        {1}
    };
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangle, Example3) {
    Solution s;
    int numRows = 2;
    vector<vector<int>> result = s.generate(numRows);
    vector<vector<int>> expect = {
        {1},
        {1, 1}
    };
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangle, Example4) {
    Solution s;
    int numRows = 3;
    vector<vector<int>> result = s.generate(numRows);
    vector<vector<int>> expect = {
        {1},
        {1, 1},
        {1, 2, 1}
    };
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangle, Example5) {
    Solution s;
    int numRows = 4;
    vector<vector<int>> result = s.generate(numRows);
    vector<vector<int>> expect = {
        {1},
        {1, 1},
        {1, 2, 1},
        {1, 3, 3, 1}
    };
    EXPECT_EQ(result, expect);
}

TEST(PascalTriangle, Example6) {
    Solution s;
    int numRows = 6;
    vector<vector<int>> result = s.generate(numRows);
    vector<vector<int>> expect = {
        {1},
        {1, 1},
        {1, 2, 1},
        {1, 3, 3, 1},
        {1, 4, 6, 4, 1},
        {1, 5, 10, 10, 5, 1}
    };
    EXPECT_EQ(result, expect);
}
