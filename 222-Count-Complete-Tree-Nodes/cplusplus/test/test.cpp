#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(CountCompleteTreeNodes, Test_01) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    int result = s.countNodes(root);
    EXPECT_EQ(result, 6);
} 

TEST(CountCompleteTreeNodes, Test_02) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    int result = s.countNodes(root);
    EXPECT_EQ(result, 7);
}

TEST(CountCompleteTreeNodes, Test_03) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    int result = s.countNodes(root);
    EXPECT_EQ(result, 1);
}

TEST(CountCompleteTreeNodes, Test_04) {
    Solution s;
    TreeNode* root = nullptr;
    int result = s.countNodes(root);
    EXPECT_EQ(result, 0);
}

TEST(CountCompleteTreeNodes, Test_05) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    int result = s.countNodes(root);
    EXPECT_EQ(result, 2);
}