#include "../src/solution.hpp"
#include <gtest/gtest.h>

bool compare(ListNode* l1, ListNode* l2) {
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val != l2->val) {
            return false;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    return l1 == nullptr && l2 == nullptr;
}

TEST(RemoveLinkedListElements, Test1) {
    Solution solution;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);
    int val = 6;
    ListNode* result = solution.removeElements(head, val);
    ListNode* expected = new ListNode(1);
    expected->next = new ListNode(2);
    expected->next->next = new ListNode(3);
    expected->next->next->next = new ListNode(4);
    expected->next->next->next->next = new ListNode(5);
    ASSERT_TRUE(compare(result, expected));
}

TEST(RemoveLinkedListElements, Test2) {
    Solution solution;
    ListNode* head = nullptr;
    int val = 1;
    ListNode* result = solution.removeElements(head, val);
    ListNode* expected = nullptr;
    ASSERT_TRUE(compare(result, expected));
}

TEST(RemoveLinkedListElements, Test3) {
    Solution solution;
    ListNode* head = new ListNode(7);
    head->next = new ListNode(7);
    head->next->next = new ListNode(7);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next = new ListNode(7);
    int val = 7;
    ListNode* result = solution.removeElements(head, val);
    ListNode* expected = nullptr;
    ASSERT_TRUE(compare(result, expected));
}

TEST(RemoveLinkedListElements, Test4) {
    Solution solution;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);
    int val = 7;
    ListNode* result = solution.removeElements(head, val);
    ListNode* expected = new ListNode(1);
    expected->next = new ListNode(2);
    expected->next->next = new ListNode(3);
    expected->next->next->next = new ListNode(4);
    expected->next->next->next->next = new ListNode(5);
    expected->next->next->next->next->next = new ListNode(6);
    ASSERT_TRUE(compare(result, expected));
}