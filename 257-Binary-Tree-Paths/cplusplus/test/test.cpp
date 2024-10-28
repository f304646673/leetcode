#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(BinaryTreePaths, Test1) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    vector<string> res = s.binaryTreePaths(root);
    vector<string> expected = {"1->2->5", "1->3"};
    ASSERT_EQ(res, expected);
}

TEST(BinaryTreePaths, Test2) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    vector<string> res = s.binaryTreePaths(root);
    vector<string> expected = {"1"};
    ASSERT_EQ(res, expected);
}

TEST(BinaryTreePaths, Test3) {
    Solution s;
    TreeNode* root = nullptr;
    vector<string> res = s.binaryTreePaths(root);
    vector<string> expected = {};
    ASSERT_EQ(res, expected);
}

TEST(BinaryTreePaths, Test4) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(5);
    vector<string> res = s.binaryTreePaths(root);
    vector<string> expected = {"1->2->3", "1->2->4", "1->5"};
    ASSERT_EQ(res, expected);
}

TEST(BinaryTreePaths, Test5) {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<string> res = s.binaryTreePaths(root);
    vector<string> expected = {"1->2->3", "1->2->4", "1->5->6", "1->5->7"};
    ASSERT_EQ(res, expected);
}
