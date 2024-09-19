#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(TheTwoSneakyNumbersOfDigitville, Example1) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2};
    vector<int> expected = {1, 2};
    vector<int> result = s.getSneakyNumbers(nums);
    ASSERT_EQ(expected, result);
}

TEST(TheTwoSneakyNumbersOfDigitville, Example2) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> result = s.getSneakyNumbers(nums);
    ASSERT_EQ(expected, result);
}

TEST(TheTwoSneakyNumbersOfDigitville, Example3) {
    Solution s;
    vector<int> nums = {0,3,2,1,3,2};
    vector<int> expected = {3,2};
    vector<int> result = s.getSneakyNumbers(nums);
    ASSERT_EQ(expected, result);
}

TEST(TheTwoSneakyNumbersOfDigitville, Example4) {
    Solution s;
    vector<int> nums = {7,1,5,4,3,4,6,0,9,5,8,2};
    vector<int> expected = {4,5};
    vector<int> result = s.getSneakyNumbers(nums);
    ASSERT_EQ(expected, result);
}