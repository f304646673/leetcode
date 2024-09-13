#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    Solution solution;
    bool result = solution.isBalanced(root);
    ASSERT_EQ(result, true);
}

TEST(Solution, Test2) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);
    Solution solution;
    bool result = solution.isBalanced(root);
    ASSERT_EQ(result, false);
}

TEST(Solution, Test3) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    root->right->left->left = new TreeNode(4);
    root->right->left->right = new TreeNode(4);
    Solution solution;
    bool result = solution.isBalanced(root);
    ASSERT_EQ(result, true);
}

TEST(Solution, Test4) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    root->right->left->left = new TreeNode(4);
    root->right->left->right = new TreeNode(4);
    root->right->right->left = new TreeNode(4);
    root->right->right->right = new TreeNode(4);
    Solution solution;
    bool result = solution.isBalanced(root);
    ASSERT_EQ(result, true);
}

TEST(Solution, Test5) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    root->right->left->left = new TreeNode(4);
    root->right->left->right = new TreeNode(4);
    root->right->right->left = new TreeNode(4);
    root->right->right->right = new TreeNode(4);
    root->right->right->right->left = new TreeNode(5);
    root->right->right->right->right = new TreeNode(5);
    Solution solution;
    bool result = solution.isBalanced(root);
    ASSERT_EQ(result, true);
}

TEST(Solution, Test6) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    root->right->left->left = new TreeNode(4);
    root->right->left->right = new TreeNode(4);
    root->right->right->left = new TreeNode(4);
    root->right->right->right = new TreeNode(4);
    root->right->right->right->left = new TreeNode(5);
    root->right->right->right->right = new TreeNode(5);
    root->right->right->right->left->left = new TreeNode(6);
    root->right->right->right->left->right = new TreeNode(6);
    root->right->right->right->right->left = new TreeNode(6);
    root->right->right->right->right->right = new TreeNode(6);
    Solution solution;
    bool result = solution.isBalanced(root);
    ASSERT_EQ(result, false);
}