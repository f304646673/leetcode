#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SolutionTest, Example1) {
    Solution solution;
    vector<string> commands = {"RIGHT", "DOWN", "LEFT", "DOWN"};
    int n = 5;
    int expected = 10;
    ASSERT_EQ(solution.finalPositionOfSnake(n, commands), expected);
}

TEST(SolutionTest, Example2) {
    Solution solution;
    vector<string> commands = {"RIGHT", "DOWN", "LEFT", "DOWN", "DOWN"};
    int n = 5;
    int expected = 15;
    ASSERT_EQ(solution.finalPositionOfSnake(n, commands), expected);
}

TEST(SolutionTest, Example3) {
    Solution solution;
    vector<string> commands = {"RIGHT", "DOWN", "LEFT", "DOWN", "DOWN", "RIGHT"};
    int n = 5;
    int expected = 16;
    ASSERT_EQ(solution.finalPositionOfSnake(n, commands), expected);
}

TEST(SolutionTest, Example4) {
    Solution solution;
    vector<string> commands = {"RIGHT", "DOWN", "LEFT", "DOWN", "DOWN", "RIGHT", "UP"};
    int n = 5;
    int expected = 11;
    ASSERT_EQ(solution.finalPositionOfSnake(n, commands), expected);
}

TEST(SolutionTest, Example5) {
    Solution solution;
    vector<string> commands = {"RIGHT", "DOWN", "LEFT", "DOWN", "DOWN", "RIGHT", "UP", "UP"};
    int n = 5;
    int expected = 6;
    ASSERT_EQ(solution.finalPositionOfSnake(n, commands), expected);
}

TEST(SolutionTest, Example6) {
    Solution solution;
    vector<string> commands = {"RIGHT", "DOWN", "LEFT", "DOWN", "DOWN", "RIGHT", "UP", "UP", "LEFT"};
    int n = 5;
    int expected = 5;
    ASSERT_EQ(solution.finalPositionOfSnake(n, commands), expected);
}