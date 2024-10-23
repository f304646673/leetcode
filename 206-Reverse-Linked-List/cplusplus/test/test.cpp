#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(Reverselist, Test_01) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode* result = s.reverseList(head);
    EXPECT_EQ(result->val, 5);
    EXPECT_EQ(result->next->val, 4);
    EXPECT_EQ(result->next->next->val, 3);
    EXPECT_EQ(result->next->next->next->val, 2);
    EXPECT_EQ(result->next->next->next->next->val, 1);
}

TEST(Reverselist, Test_02) {
    Solution s;
    ListNode* head = new ListNode(1);
    ListNode* result = s.reverseList(head);
    EXPECT_EQ(result->val, 1);
}

TEST(Reverselist, Test_03) {
    Solution s;
    ListNode* head = nullptr;
    ListNode* result = s.reverseList(head);
    EXPECT_EQ(result, nullptr);
}

TEST(Reverselist, Test_04) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    ListNode* result = s.reverseList(head);
    EXPECT_EQ(result->val, 2);
    EXPECT_EQ(result->next->val, 1);
}

TEST(Reverselist, Test_05) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    ListNode* result = s.reverseList(head);
    EXPECT_EQ(result->val, 3);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next->val, 1);
}

TEST(Reverselist, Test_06) {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    ListNode* result = s.reverseList(head);
    EXPECT_EQ(result->val, 4);
    EXPECT_EQ(result->next->val, 3);
    EXPECT_EQ(result->next->next->val, 2);
    EXPECT_EQ(result->next->next->next->val, 1);
}
