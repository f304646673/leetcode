
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode* current = &dummy;

        while (l1 != nullptr || l2 != nullptr) {
            int sum = (l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + (current->next != nullptr ? current->next->val : 0);  
            
            if (current->next == nullptr) {
                current->next = new ListNode(0);
            }

            if (sum > 9) {
                sum -= 10;
                current->next->next = new ListNode(1);
            } 

            current->next->val = sum;

            current = current->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy.next;
    }
};