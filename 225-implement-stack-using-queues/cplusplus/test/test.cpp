#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ImplementStackUsingQueues, Test_01) {
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int result = s.top();
    EXPECT_EQ(result, 5);
    result = s.pop();
    EXPECT_EQ(result, 5);
    result = s.pop();
    EXPECT_EQ(result, 4);
    result = s.pop();
    EXPECT_EQ(result, 3);
    result = s.pop();
    EXPECT_EQ(result, 2);
    result = s.pop();
    EXPECT_EQ(result, 1);
    bool empty = s.empty();
    EXPECT_EQ(empty, true);
}

TEST(ImplementStackUsingQueues, Test_02) {
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int result = s.pop();
    EXPECT_EQ(result, 5);
    result = s.pop();
    EXPECT_EQ(result, 4);
    result = s.pop();
    EXPECT_EQ(result, 3);
    result = s.pop();
    EXPECT_EQ(result, 2);
    result = s.pop();
    EXPECT_EQ(result, 1);
    bool empty = s.empty();
    EXPECT_EQ(empty, true);
}