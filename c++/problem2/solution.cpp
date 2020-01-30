struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int tmp;
        if(l1 == nullptr && l2 == nullptr) {
            return nullptr;
        } else if(l1 != nullptr && l2 != nullptr) {
            tmp = l1->val + l2->val;
            l1->val = tmp % 10;
            if(tmp >= 10) {
                if(l1->next != nullptr) {
                    l1->next->val += 1;
                } else if(l2->next != nullptr) {
                    l2->next->val += 1;
                } else {
                    l1->next = new ListNode(1);
                    return l1;
                }
            }
            l1->next = addTwoNumbers(l1->next, l2->next);
            return l1;
        } else if(l1 != nullptr) {
            if(l1->val == 10) {
                l1->val = 0;
                if(l1->next != nullptr) {
                    l1->next->val += 1;
                    l1->next = addTwoNumbers(l1->next, nullptr);
                } else {
                    l1->next = new ListNode(1);
                }
            }
            return l1;
        } else {
            if(l2->val == 10) {
                l2->val = 0;
                if(l2->next != nullptr) {
                    l2->next->val += 1;
                    l2->next = addTwoNumbers(l2->next, nullptr);
                } else {
                    l2->next = new ListNode(1);
                }
            }
            return l2;
        }
        return l1;
    }
};
