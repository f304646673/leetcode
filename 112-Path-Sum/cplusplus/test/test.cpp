#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(PathSum, Example1) {
    Solution s;
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
    int sum = 22;
    bool result = s.hasPathSum(root, sum);
    bool expect = true;
    EXPECT_EQ(result, expect);
}

TEST(PathSum, Example2) {
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    int sum = 1;
    bool result = s.hasPathSum(root, sum);
    bool expect = false;
    EXPECT_EQ(result, expect);
}

TEST(PathSum, Example3) {
    Solution s;
    TreeNode *root = new TreeNode(1);
    int sum = 1;
    bool result = s.hasPathSum(root, sum);
    bool expect = true;
    EXPECT_EQ(result, expect);
}

TEST(PathSum, Example4) {
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    int sum = 5;
    bool result = s.hasPathSum(root, sum);
    bool expect = false;
    EXPECT_EQ(result, expect);
}

TEST(PathSum, Example5) {
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    int sum = 4;
    bool result = s.hasPathSum(root, sum);
    bool expect = true;
    EXPECT_EQ(result, expect);
}

TEST(PathSum, Example6) {
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    int sum = 6;
    bool result = s.hasPathSum(root, sum);
    bool expect = false;
    EXPECT_EQ(result, expect);
}

TEST(PathSum, Example7) {
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    int sum = 5;
    bool result = s.hasPathSum(root, sum);
    bool expect = false;
    EXPECT_EQ(result, expect);
}

TEST(PathSum, Example8) {
    Solution s;
    TreeNode *root = nullptr;
    int sum = 0;
    bool result = s.hasPathSum(root, sum);
    bool expect = false;
    EXPECT_EQ(result, expect);
}

TEST(PathSum, Example9) {
    Solution s;
    TreeNode *root = new TreeNode(-2);
    root->right = new TreeNode(-3);
    int sum = -5;
    bool result = s.hasPathSum(root, sum);
    bool expect = true;
    EXPECT_EQ(result, expect);
}