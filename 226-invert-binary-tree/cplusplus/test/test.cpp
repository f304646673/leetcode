#include "../src/solution.hpp"
#include <gtest/gtest.h>

bool compareBinaryTree(TreeNode* root1, TreeNode* root2)
{
    if (root1 == nullptr && root2 == nullptr) {
        return true;
    }
    if (root1 == nullptr || root2 == nullptr) {
        return false;
    }
    if (root1->val != root2->val) {
        return false;
    }
    return compareBinaryTree(root1->left, root2->left) && compareBinaryTree(root1->right, root2->right);
}

TEST(InvertBinaryTree, Example1)
{
    Solution solution;
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    TreeNode* expected = new TreeNode(4);
    expected->left = new TreeNode(7);
    expected->right = new TreeNode(2);
    expected->left->left = new TreeNode(9);
    expected->left->right = new TreeNode(6);
    expected->right->left = new TreeNode(3);
    expected->right->right = new TreeNode(1);

    TreeNode* result = solution.invertTree(root);

    EXPECT_TRUE(compareBinaryTree(result, expected));
}

TEST(InvertBinaryTree, Example2)
{
    Solution solution;
    TreeNode* root = nullptr;

    TreeNode* expected = nullptr;

    TreeNode* result = solution.invertTree(root);

    EXPECT_TRUE(compareBinaryTree(result, expected));
}

TEST(InvertBinaryTree, Example3)
{
    Solution solution;
    TreeNode* root = new TreeNode(1);

    TreeNode* expected = new TreeNode(1);

    TreeNode* result = solution.invertTree(root);

    EXPECT_TRUE(compareBinaryTree(result, expected));
}

TEST(InvertBinaryTree, Example4)
{
    Solution solution;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);

    TreeNode* expected = new TreeNode(1);
    expected->right = new TreeNode(2);

    TreeNode* result = solution.invertTree(root);

    EXPECT_TRUE(compareBinaryTree(result, expected));
}

TEST(InvertBinaryTree, Example5)
{
    Solution solution;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);

    TreeNode* expected = new TreeNode(1);
    expected->left = new TreeNode(2);

    TreeNode* result = solution.invertTree(root);

    EXPECT_TRUE(compareBinaryTree(result, expected));
}

TEST(InvertBinaryTree, Example6)
{
    Solution solution;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    TreeNode* expected = new TreeNode(1);
    expected->left = new TreeNode(3);
    expected->right = new TreeNode(2);
    expected->right->right = new TreeNode(4);

    TreeNode* result = solution.invertTree(root);

    EXPECT_TRUE(compareBinaryTree(result, expected));
}
