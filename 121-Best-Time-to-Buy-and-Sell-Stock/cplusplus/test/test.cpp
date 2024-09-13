#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(BestTimeToBuyAndSellStock, Example1) {
    Solution s;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int result = s.maxProfit(prices);
    int expect = 5;
    EXPECT_EQ(result, expect);
}

TEST(BestTimeToBuyAndSellStock, Example2) {
    Solution s;
    vector<int> prices = {7, 6, 4, 3, 1};
    int result = s.maxProfit(prices);
    int expect = 0;
    EXPECT_EQ(result, expect);
}

TEST(BestTimeToBuyAndSellStock, Example3) {
    Solution s;
    vector<int> prices = {1, 2};
    int result = s.maxProfit(prices);
    int expect = 1;
    EXPECT_EQ(result, expect);
}

TEST(BestTimeToBuyAndSellStock, Example4) {
    Solution s;
    vector<int> prices = {2, 4, 1};
    int result = s.maxProfit(prices);
    int expect = 2;
    EXPECT_EQ(result, expect);
}

TEST(BestTimeToBuyAndSellStock, Example5) {
    Solution s;
    vector<int> prices = {2, 1, 2, 0, 1};
    int result = s.maxProfit(prices);
    int expect = 1;
    EXPECT_EQ(result, expect);
}

TEST(BestTimeToBuyAndSellStock, Example6) {
    Solution s;
    vector<int> prices = {1, 2, 4, 2, 5, 7, 2, 4, 9, 0};
    int result = s.maxProfit(prices);
    int expect = 8;
    EXPECT_EQ(result, expect);
}