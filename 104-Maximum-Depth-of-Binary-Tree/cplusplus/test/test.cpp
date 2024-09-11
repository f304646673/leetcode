#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(MaximumDepthofBinaryTree, Example1) {
    Solution s;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    int result = s.maxDepth(root);
    EXPECT_EQ(result, 3);
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(MaximumDepthofBinaryTree, Example2) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    int result = s.maxDepth(root);
    EXPECT_EQ(result, 2);
    delete root->left;
    delete root;
}

TEST(MaximumDepthofBinaryTree, Example3) {
    Solution s;
    TreeNode* root = nullptr;
    int result = s.maxDepth(root);
    EXPECT_EQ(result, 0);
}

TEST(MaximumDepthofBinaryTree, Example4) {
    Solution s;
    TreeNode* root = new TreeNode(0);
    int result = s.maxDepth(root);
    EXPECT_EQ(result, 1);
    delete root;
}

TEST(MaximumDepthofBinaryTree, Example5) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    int result = s.maxDepth(root);
    EXPECT_EQ(result, 3);
    delete root->left->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;
}

TEST(MaximumDepthofBinaryTree, Example6) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    int result = s.maxDepth(root);
    EXPECT_EQ(result, 3);
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;
}