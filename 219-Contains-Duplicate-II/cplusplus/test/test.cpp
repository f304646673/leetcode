#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(ContainsDuplicateII, Test_01) {
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;
    bool result = s.containsNearbyDuplicate(nums, k);
    EXPECT_EQ(result, true);
}

TEST(ContainsDuplicateII, Test_02) {
    Solution s;
    vector<int> nums = {1, 0, 1, 1};
    int k = 1;
    bool result = s.containsNearbyDuplicate(nums, k);
    EXPECT_EQ(result, true);
}

TEST(ContainsDuplicateII, Test_03) {
    Solution s;
    vector<int> nums = {1, 2, 3, 1, 2, 3};
    int k = 2;
    bool result = s.containsNearbyDuplicate(nums, k);
    EXPECT_EQ(result, false);
}

TEST(ContainsDuplicateII, Test_04) {
    Solution s;
    vector<int> nums = {99, 99};
    int k = 2;
    bool result = s.containsNearbyDuplicate(nums, k);
    EXPECT_EQ(result, true);
}

TEST(ContainsDuplicateII, Test_05) {
    Solution s;
    vector<int> nums = {1, 2};
    int k = 2;
    bool result = s.containsNearbyDuplicate(nums, k);
    EXPECT_EQ(result, false);
}

TEST(ContainsDuplicateII, Test_06) {
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    int k = 0;
    bool result = s.containsNearbyDuplicate(nums, k);
    EXPECT_EQ(result, false);
}