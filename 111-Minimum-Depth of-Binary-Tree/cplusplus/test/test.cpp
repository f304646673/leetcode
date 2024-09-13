#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(MinDepth, Example1)
{
    Solution s;
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    int expected = 2;
    int result = s.minDepth(root);
    EXPECT_EQ(expected, result);
}

TEST(MinDepth, Example2)
{
    Solution s;
    TreeNode *root = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(5);
    root->right->right->right->right = new TreeNode(6);
    int expected = 5;
    int result = s.minDepth(root);
    EXPECT_EQ(expected, result);
}

TEST(MinDepth, Example3)
{
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->left->left = new TreeNode(5);
    int expected = 5;
    int result = s.minDepth(root);
    EXPECT_EQ(expected, result);
}

TEST(MinDepth, Example4)
{
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(4);
    root->right->left->left = new TreeNode(4);
    root->right->left->right = new TreeNode(4);
    root->right->right->left = new TreeNode(4);
    root->right->right->right = new TreeNode(4);
    int expected = 4;
    int result = s.minDepth(root);
    EXPECT_EQ(expected, result);
}

TEST(MinDepth, Example5)
{
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(4);
    root->right->left->left = new TreeNode(4);
    root->right->left->right = new TreeNode(4);
    root->right->right->left = new TreeNode(4);
    root->right->right->right = new TreeNode(4);
    root->left->left->left->left = new TreeNode(5);
    root->left->left->left->right = new TreeNode(5);
    root->left->left->right->left = new TreeNode(5);
    root->left->left->right->right = new TreeNode(5);
    root->left->right->left->left = new TreeNode(5);
    root->left->right->left->right = new TreeNode(5);
    root->left->right->right->left = new TreeNode(5);
    root->left->right->right->right = new TreeNode(5);
    root->right->left->left->left = new TreeNode(5);
    root->right->left->left->right = new TreeNode(5);
    root->right->left->right->left = new TreeNode(5);
    root->right->left->right->right = new TreeNode(5);
    root->right->right->left->left = new TreeNode(5);
    root->right->right->left->right = new TreeNode(5);
    root->right->right->right->left = new TreeNode(5);
    root->right->right->right->right = new TreeNode(5);
    int expected = 5;
    int result = s.minDepth(root);
    EXPECT_EQ(expected, result);
}