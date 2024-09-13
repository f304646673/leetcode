#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Test1) {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    Solution solution;
    vector<int> result = solution.postorderTraversal(root);
    vector<int> expected = {3, 2, 1};
    EXPECT_EQ(result, expected);
}

TEST(Solution, Test2) {
    TreeNode* root = nullptr;
    Solution solution;
    vector<int> result = solution.postorderTraversal(root);
    vector<int> expected = {};
    EXPECT_EQ(result, expected);
}

TEST(Solution, Test3) {
    TreeNode* root = new TreeNode(1);
    Solution solution;
    vector<int> result = solution.postorderTraversal(root);
    vector<int> expected = {1};
    EXPECT_EQ(result, expected);
}

TEST(Solution, Test4) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    Solution solution;
    vector<int> result = solution.postorderTraversal(root);
    vector<int> expected = {2, 1};
    EXPECT_EQ(result, expected);
}

TEST(Solution, Test5) {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    Solution solution;
    vector<int> result = solution.postorderTraversal(root);
    vector<int> expected = {2, 1};
    EXPECT_EQ(result, expected);
}

TEST(Solution, Test6) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    Solution solution;
    vector<int> result = solution.postorderTraversal(root);
    vector<int> expected = {4, 5, 2, 6, 7, 3, 1};
    EXPECT_EQ(result, expected);
}