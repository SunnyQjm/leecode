using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // 判断要删除的是否是头结点
        ListNode* tmp = head;
        ListNode* target = head, *targetParent = nullptr;
        while(tmp != nullptr) {
            if(n > 0) {
                n--;
            } else {
                targetParent = target;  // 记录目标节点的前向节点
                target = target->next;
            }
            tmp = tmp->next;
        }
        if(target == head) { // 如果要删除的节点是头节点
            return target->next;
        } else {
            targetParent->next = target->next;
            return head;
        }
    }
};
