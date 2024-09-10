#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(SameTree, Example1) {
    Solution s;
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    bool result = s.isSameTree(p, q);
    EXPECT_EQ(result, true);
    delete p;
    delete q;
}

TEST(SameTree, Example2) {
    Solution s;
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    TreeNode* q = new TreeNode(1);
    q->right = new TreeNode(2);
    bool result = s.isSameTree(p, q);
    EXPECT_EQ(result, false);
    delete p;
    delete q;
}

TEST(SameTree, Example3) {
    Solution s;
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(1);
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(1);
    q->right = new TreeNode(2);
    bool result = s.isSameTree(p, q);
    EXPECT_EQ(result, false);
    delete p;
    delete q;
}

TEST(SameTree, Example4) {
    Solution s;
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    q->right->right = new TreeNode(4);
    bool result = s.isSameTree(p, q);
    EXPECT_EQ(result, false);
    delete p;
    delete q;
}

TEST(SameTree, Example5) {
    Solution s;
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    p->right->right = new TreeNode(4);
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    bool result = s.isSameTree(p, q);
    EXPECT_EQ(result, false);
    delete p;
    delete q;
}

TEST(SameTree, Example6) {
    Solution s;
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    p->right->right = new TreeNode(4);
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    q->right->right = new TreeNode(4);
    bool result = s.isSameTree(p, q);
    EXPECT_EQ(result, true);
    delete p;
    delete q;
}
