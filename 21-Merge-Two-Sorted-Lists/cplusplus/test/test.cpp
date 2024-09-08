#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(MergeTwoSortedLists, Example1) {
    Solution s;
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);
    ListNode* result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 1);
    EXPECT_EQ(result->next->next->val, 2);
    EXPECT_EQ(result->next->next->next->val, 3);
    EXPECT_EQ(result->next->next->next->next->val, 4);
    EXPECT_EQ(result->next->next->next->next->next->val, 4);
    EXPECT_EQ(result->next->next->next->next->next->next, nullptr);
    delete l1;
    delete l2;
}

TEST(MergeTwoSortedLists, Example2) {
    Solution s;
    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;
    ListNode* result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(result, nullptr);
}

TEST(MergeTwoSortedLists, Example3) {
    Solution s;
    ListNode* l1 = nullptr;
    ListNode* l2 = new ListNode(0);
    ListNode* result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(result->val, 0);
    EXPECT_EQ(result->next, nullptr);
    delete l2;
}

TEST(MergeTwoSortedLists, Example4) {
    Solution s;
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = new ListNode(0);
    ListNode* result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(result->val, 0);
    EXPECT_EQ(result->next->val, 1);
    EXPECT_EQ(result->next->next, nullptr);
    delete l1;
    delete l2;
}

TEST(MergeTwoSortedLists, Example5) {
    Solution s;
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    ListNode* l2 = new ListNode(1);
    ListNode* result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 1);
    EXPECT_EQ(result->next->next->val, 2);
    EXPECT_EQ(result->next->next->next->val, 4);
    EXPECT_EQ(result->next->next->next->next, nullptr);
    delete l1;
    delete l2;
}