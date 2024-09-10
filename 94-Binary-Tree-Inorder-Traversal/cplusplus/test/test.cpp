#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(BinaryTreeInorderTraversal, Example1) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = s.inorderTraversal(root);
    EXPECT_EQ(result.size(), 3);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 3);
    EXPECT_EQ(result[2], 2);
    delete root;
}

TEST(BinaryTreeInorderTraversal, Example2) {
    Solution s;
    TreeNode* root = nullptr;
    vector<int> result = s.inorderTraversal(root);
    EXPECT_EQ(result.size(), 0);
}

TEST(BinaryTreeInorderTraversal, Example3) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    vector<int> result = s.inorderTraversal(root);
    EXPECT_EQ(result.size(), 1);
    EXPECT_EQ(result[0], 1);
    delete root;
}

TEST(BinaryTreeInorderTraversal, Example4) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    vector<int> result = s.inorderTraversal(root);
    EXPECT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 2);
    EXPECT_EQ(result[1], 1);
    delete root;
}

TEST(BinaryTreeInorderTraversal, Example5) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    vector<int> result = s.inorderTraversal(root);
    EXPECT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], 1);
    EXPECT_EQ(result[1], 2);
    delete root;
}

TEST(BinaryTreeInorderTraversal, Example6) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    vector<int> result = s.inorderTraversal(root);
    EXPECT_EQ(result.size(), 3);
    EXPECT_EQ(result[0], 2);
    EXPECT_EQ(result[1], 1);
    EXPECT_EQ(result[2], 3);
    delete root;
}