#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(nullptr) {}
};


/* 递归解法 */
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

void test1() {
    ListNode l1(2), l1_c1(4), l1_c2(3);
    l1.next = &l1_c1;
    l1_c1.next = &l1_c2;
    
    ListNode l2(5), l2_c1(6), l2_c2(4);
    l2.next = &l2_c1;
    l2_c1.next = &l2_c2;
    auto result = addTwoNumbers(&l1, &l2);
    
    cout << result->val << " ";

    while(result->next != nullptr) {
        result = result->next;
        cout << result->val << " ";
    }
    cout << endl;
}

void test2() {
    ListNode l1(1);
    
    ListNode l2(9), l2_c1(9);
    l2.next = &l2_c1;
    
    auto result = addTwoNumbers(&l1, &l2);
    
    cout << result->val << " ";

    while(result->next != nullptr) {
        result = result->next;
        cout << result->val << " ";
    }
    cout << endl;
}

void test3() {
    ListNode l1(5);
    
    ListNode l2(5);
    
    auto result = addTwoNumbers(&l1, &l2);
    
    cout << result->val << " ";

    while(result->next != nullptr) {
        result = result->next;
        cout << result->val << " ";
    }
    cout << endl;
}

void test4() {
    ListNode l1(9);
    
    ListNode l2(9);
    
    auto result = addTwoNumbers(&l1, &l2);
    
    cout << result->val << " ";

    while(result->next != nullptr) {
        result = result->next;
        cout << result->val << " ";
    }
    cout << endl;
}

int main() {
    test1();
    test2();
    test3();
    test4();
    return 0;
}
