#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, test1) {
    Solution solution;
    string s = "EEEEEEE";
    EXPECT_EQ(solution.minimumChairs(s), 7);
}

TEST(Solution, test2) {
    Solution solution;
    string s = "ELELEEL";
    EXPECT_EQ(solution.minimumChairs(s), 2);
}

TEST(Solution, test3) {
    Solution solution;
    string s = "ELEELEELLL";
    EXPECT_EQ(solution.minimumChairs(s), 3);
}