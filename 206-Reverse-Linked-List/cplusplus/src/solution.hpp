struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur = nullptr;
        ListNode* next = head;
        while (next != nullptr) {
            ListNode* temp = next->next;
            next->next = cur;
            cur = next;
            next = temp;
        }
        return cur;
    }
};