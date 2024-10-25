#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(test, case1) {
    MyQueue obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    EXPECT_EQ(obj.pop(), 1);
    EXPECT_EQ(obj.pop(), 2);
    EXPECT_EQ(obj.pop(), 3);
    EXPECT_EQ(obj.pop(), 4);
    EXPECT_EQ(obj.pop(), 5);
    EXPECT_EQ(obj.empty(), true);
}

TEST(test, case2) {
    MyQueue obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    EXPECT_EQ(obj.peek(), 1);
    EXPECT_EQ(obj.pop(), 1);
    EXPECT_EQ(obj.peek(), 2);
    EXPECT_EQ(obj.pop(), 2);
    EXPECT_EQ(obj.peek(), 3);
    EXPECT_EQ(obj.pop(), 3);
    EXPECT_EQ(obj.peek(), 4);
    EXPECT_EQ(obj.pop(), 4);
    EXPECT_EQ(obj.peek(), 5);
    EXPECT_EQ(obj.pop(), 5);
    EXPECT_EQ(obj.empty(), true);
}

