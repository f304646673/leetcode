#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test) {
    Solution solution;
    ASSERT_EQ(solution.clearDigits("a1b2c3"), "");
    ASSERT_EQ(solution.clearDigits("a12b34c56"), "");
    ASSERT_EQ(solution.clearDigits("a123b456c789"), "");
    ASSERT_EQ(solution.clearDigits("123"), "");
    ASSERT_EQ(solution.clearDigits("abc"), "abc");
    ASSERT_EQ(solution.clearDigits("a1"), "");
    ASSERT_EQ(solution.clearDigits("1a"), "a");
    ASSERT_EQ(solution.clearDigits("1"), "");
    ASSERT_EQ(solution.clearDigits("a"), "a");
    ASSERT_EQ(solution.clearDigits(""), "");
    ASSERT_EQ(solution.clearDigits("z"), "z");
}