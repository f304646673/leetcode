struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* last = head;
        while (last != nullptr && last->next != nullptr) {
            if (last->val == last->next->val) {
                last->next = last->next->next;
            } else {
                last = last->next;
            }
        }
        return head;
    }
};