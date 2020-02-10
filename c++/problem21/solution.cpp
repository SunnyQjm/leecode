using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    /**
     * 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的
     */ 
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) {
            return l2;
        } else if (l2 == nullptr) {
            return l1;
        } 
        ListNode* target;
        if(l1->val < l2->val) {
            target = l1;
            l1 = l1->next;
        } else {
            target = l2;
            l2 = l2->next;
        }
        ListNode* tmp = target;
        while(l1 != nullptr && l2 != nullptr) {
            if(l1->val < l2->val) {
                tmp->next = l1;
                l1 = l1->next;
            } else {
                tmp->next = l2;
                l2 = l2->next;
            }
            tmp = tmp->next;
        }
        if(l1 != nullptr) {
            tmp->next = l1;
        } else if(l2 != nullptr) {
            tmp->next = l2;
        }
        return target;
    }
};
