#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode19_removeNthFromEnd, test0) {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head = solution.removeNthFromEnd(head, 2);
    string s = "";
    while(head != nullptr) {
        s += to_string(head->val);
        head = head->next;
    }
    EXPECT_EQ(s, "1235");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
