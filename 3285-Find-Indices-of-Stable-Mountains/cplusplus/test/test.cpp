#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(FindIndicesOfStableMountains, Example1) {
    Solution s;
    vector<int> height = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int threshold = 5;
    vector<int> expected = {5, 6, 7, 8};
    vector<int> result = s.stableMountains(height, threshold);
    ASSERT_EQ(expected, result);
}

TEST(FindIndicesOfStableMountains, Example2) {
    Solution s;
    vector<int> height = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int threshold = 1;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> result = s.stableMountains(height, threshold);
    ASSERT_EQ(expected, result);
}

TEST(FindIndicesOfStableMountains, Example3) {
    Solution s;
    vector<int> height = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int threshold = 9;
    vector<int> expected = {};
    vector<int> result = s.stableMountains(height, threshold);
    ASSERT_EQ(expected, result);
}