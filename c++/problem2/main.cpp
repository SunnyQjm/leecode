#include <iostream>
#include <gtest/gtest.h>
#include <string>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leecode2_addTwoNumbers, test0) {
    ListNode l1(2), l1_c1(4), l1_c2(3);
    l1.next = &l1_c1;
    l1_c1.next = &l1_c2;
    
    ListNode l2(5), l2_c1(6), l2_c2(4);
    l2.next = &l2_c1;
    l2_c1.next = &l2_c2;
    auto result = solution.addTwoNumbers(&l1, &l2);

    string s = to_string(result->val);

    while(result->next != nullptr) {
        result = result->next;
        s += to_string(result->val);
    }

    EXPECT_EQ(s, "708");
}

TEST(Leecode2_addTwoNumbers, test1) {
    ListNode l1(1);
    
    ListNode l2(9), l2_c1(9);
    l2.next = &l2_c1;
    
    auto result = solution.addTwoNumbers(&l1, &l2);
    
    string s = to_string(result->val);

    while(result->next != nullptr) {
        result = result->next;
        s += to_string(result->val);
    }

    EXPECT_EQ(s, "001");
}

TEST(Leecode2_addTwoNumbers, test2) {
    ListNode l1(5);
    
    ListNode l2(5);
    
    auto result = solution.addTwoNumbers(&l1, &l2);
    
    string s = to_string(result->val);

    while(result->next != nullptr) {
        result = result->next;
        s += to_string(result->val);
    }

    EXPECT_EQ(s, "01");
}

TEST(Leecode2_addTwoNumbers, test3) {
    ListNode l1(9);
    
    ListNode l2(9);
    
    auto result = solution.addTwoNumbers(&l1, &l2);
    
    string s = to_string(result->val);

    while(result->next != nullptr) {
        result = result->next;
        s += to_string(result->val);
    }

    EXPECT_EQ(s, "81");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
