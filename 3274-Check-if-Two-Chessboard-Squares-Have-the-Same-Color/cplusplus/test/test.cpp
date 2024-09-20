#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SolutionTest, Example1)
{
    Solution solution;
    string coordinate1 = "a1";
    string coordinate2 = "c3";
    bool expected = true;
    ASSERT_EQ(solution.checkTwoChessboards(coordinate1, coordinate2), expected);
}

TEST(SolutionTest, Example2)
{
    Solution solution;
    string coordinate1 = "h3";
    string coordinate2 = "c3";
    bool expected = false;
    ASSERT_EQ(solution.checkTwoChessboards(coordinate1, coordinate2), expected);
}
