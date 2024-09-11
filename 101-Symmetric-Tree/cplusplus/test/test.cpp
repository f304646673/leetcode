#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Solution, Sample1) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    Solution solution;
    bool output = solution.isSymmetric(root);
    bool expected = true;
    EXPECT_EQ(output, expected);
}

TEST(Solution, Sample2) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(3);
    Solution solution;
    bool output = solution.isSymmetric(root);
    bool expected = false;
    EXPECT_EQ(output, expected);
}

TEST(Solution, Sample3) {
    TreeNode* root = nullptr;
    Solution solution;
    bool output = solution.isSymmetric(root);
    bool expected = true;
    EXPECT_EQ(output, expected);
}

TEST(Solution, Sample4) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    Solution solution;
    bool output = solution.isSymmetric(root);
    EXPECT_TRUE(output);
}

TEST(Solution, Sample5) {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    Solution solution;
    bool output = solution.isSymmetric(root);
    EXPECT_TRUE(output);
}

TEST(Solution, Sample6) {
    TreeNode* root = new TreeNode(1);
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
    Solution solution;
    bool output = solution.isSymmetric(root);
    EXPECT_TRUE(output);
}
