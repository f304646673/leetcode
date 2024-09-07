#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(AddTwoNumbers, Test1) {
    Solution solution;
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    ListNode* result = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(result->val, 7);
    EXPECT_EQ(result->next->val, 0);
    EXPECT_EQ(result->next->next->val, 8);
}

TEST(AddTwoNumbers, Test2) {
    Solution solution;
    ListNode* l1 = new ListNode(0);
    ListNode* l2 = new ListNode(0);
    ListNode* result = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(result->val, 0);
}

TEST(AddTwoNumbers, Test3) {
    Solution solution;
    ListNode* l1 = new ListNode(9);
    l1->next = new ListNode(9);
    l1->next->next = new ListNode(9);
    l1->next->next->next = new ListNode(9);
    l1->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next->next = new ListNode(9);
    ListNode* l2 = new ListNode(9);
    l2->next = new ListNode(9);
    l2->next->next = new ListNode(9);
    l2->next->next->next = new ListNode(9);
    ListNode* result = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(result->val, 8);
    EXPECT_EQ(result->next->val, 9);
    EXPECT_EQ(result->next->next->val, 9);
    EXPECT_EQ(result->next->next->next->val, 9);
    EXPECT_EQ(result->next->next->next->next->val, 0);
    EXPECT_EQ(result->next->next->next->next->next->val, 0);
    EXPECT_EQ(result->next->next->next->next->next->next->val, 0);
    EXPECT_EQ(result->next->next->next->next->next->next->next->val, 1);
}