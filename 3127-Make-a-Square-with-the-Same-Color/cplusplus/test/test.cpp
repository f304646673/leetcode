#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    Solution solution;
    vector<vector<char>> grid = {
        {'B', 'W', 'B',},
        {'W', 'B', 'W'},
        {'B', 'W', 'B'}
    };
    bool result = solution.canMakeSquare(grid);
    ASSERT_EQ(result, false);
}

TEST(Solution, Test2) {
    Solution solution;
    vector<vector<char>> grid = {
        {'B', 'W', 'B',},
        {'B', 'W', 'W'},
        {'B', 'W', 'B'}
    };
    bool result = solution.canMakeSquare(grid);
    ASSERT_EQ(result, true);
}

TEST(Solution, Test3) {
    Solution solution;
    vector<vector<char>> grid = {
        {'B', 'W', 'B',},
        {'B', 'W', 'W'},
        {'B', 'W', 'W'}
    };
    bool result = solution.canMakeSquare(grid);
    ASSERT_EQ(result, true);
}