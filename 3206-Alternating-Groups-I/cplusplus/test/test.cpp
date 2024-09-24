#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, numberOfAlternatingGroups) {
    Solution s;
    vector<int> colors = {1,1,1};
    int result = s.numberOfAlternatingGroups(colors);
    EXPECT_EQ(result, 0);
}

TEST(Solution, numberOfAlternatingGroups2) {
    Solution s;
    vector<int> colors = {0,1,0,0,1};
    int result = s.numberOfAlternatingGroups(colors);
    EXPECT_EQ(result, 3);
}

TEST(Solution, numberOfAlternatingGroups3) {
    Solution s;
    vector<int> colors = {1,0,1,0,1};
    int result = s.numberOfAlternatingGroups(colors);
    EXPECT_EQ(result, 3);
}

TEST(Solution, numberOfAlternatingGroups4) {
    Solution s;
    vector<int> colors = {1,1,0,1,1};
    int result = s.numberOfAlternatingGroups(colors);
    EXPECT_EQ(result, 1);
}