#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(RemoveDuplicatesfromSortedArray, Example1) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    ListNode* result = s.deleteDuplicates(head);
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next, nullptr);
    delete head;
}

TEST(RemoveDuplicatesfromSortedArray, Example2) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);
    ListNode* result = s.deleteDuplicates(head);
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next->val, 3);
    EXPECT_EQ(result->next->next->next, nullptr);
    delete head;
}

TEST(RemoveDuplicatesfromSortedArray, Example3) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next = new ListNode(3);
    ListNode* result = s.deleteDuplicates(head);
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next->val, 3);
    EXPECT_EQ(result->next->next->next, nullptr);
    delete head;
}


TEST(RemoveDuplicatesfromSortedArray, Example4) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(1);
    head->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next = new ListNode(1);
    ListNode* result = s.deleteDuplicates(head);
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next, nullptr);
    delete head;
}

TEST(RemoveDuplicatesfromSortedArray, Example5) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    ListNode* result = s.deleteDuplicates(head);
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next->val, 3);
    EXPECT_EQ(result->next->next->next->val, 4);
    EXPECT_EQ(result->next->next->next->next->val, 5);
    EXPECT_EQ(result->next->next->next->next->next->val, 6);
    EXPECT_EQ(result->next->next->next->next->next->next, nullptr);
    delete head;
}


TEST(RemoveDuplicatesfromSortedArray, Example6) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(1);
    head->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next->next = new ListNode(1);
    ListNode* result = s.deleteDuplicates(head);
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next, nullptr);
    delete head;
}

