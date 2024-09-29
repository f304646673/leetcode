#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    Solution solution;
    vector<vector<int>> grid = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    bool expected = true;
    bool result = solution.satisfiesConditions(grid);
    ASSERT_EQ(expected, result);
}

TEST(Solution, Test2) {
    Solution solution;
    vector<vector<int>> grid = {{1, 2, 3}, {1, 2, 3}, {1, 2, 2}};
    bool expected = false;
    bool result = solution.satisfiesConditions(grid);
    ASSERT_EQ(expected, result);
}

TEST(Solution, Test3) {
    Solution solution;
    vector<vector<int>> grid = {{1, 2, 3}, {1, 2, 3}, {1, 2, 4}};
    bool expected = false;
    bool result = solution.satisfiesConditions(grid);
    ASSERT_EQ(expected, result);
}