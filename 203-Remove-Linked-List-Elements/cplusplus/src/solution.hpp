using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* cur = dummy;
        while (cur != nullptr && cur->next != nullptr) {
            ListNode* checkNode = cur->next;
            while (checkNode != nullptr && checkNode->val == val) {
                checkNode = checkNode->next;
            }
            cur->next = checkNode;
            cur = checkNode;
        }
        return dummy->next;
    }
};