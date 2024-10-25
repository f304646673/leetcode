#include "../src/solution.hpp"
#include <gtest/gtest.h>

TEST(test, case1) {
    Solution obj;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);
    EXPECT_EQ(obj.isPalindrome(head), true);
}

TEST(test, case2) {
    Solution obj;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(1);
    EXPECT_EQ(obj.isPalindrome(head), true);
}

TEST(test, case3) {
    Solution obj;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next = new ListNode(1);
    EXPECT_EQ(obj.isPalindrome(head), true);
}

TEST(test, case4) {
    Solution obj;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next = new ListNode(1);
    EXPECT_EQ(obj.isPalindrome(head), true);
}

TEST(test, case5) {
    Solution obj;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    EXPECT_EQ(obj.isPalindrome(head), false);
}


