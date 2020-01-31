#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;
Solution solution;

TEST(Leetcode7_reverse, test0) {
    EXPECT_EQ(solution.reverse(123), 321);
}

TEST(Leetcode7_reverse, test1) {
    EXPECT_EQ(solution.reverse(-123), -321);
}

TEST(Leetcode7_reverse, test2) {
    EXPECT_EQ(solution.reverse(120), 21);
}

TEST(Leetcode7_reverse, test3) {
    EXPECT_EQ(solution.reverse(1147483647), 0);
}

TEST(Leetcode7_reverse2, test0) {
    EXPECT_EQ(solution.reverse2(123), 321);
}

TEST(Leetcode7_reverse2, test1) {
    EXPECT_EQ(solution.reverse2(-123), -321);
}

TEST(Leetcode7_reverse2, test2) {
    EXPECT_EQ(solution.reverse2(120), 21);
}

TEST(Leetcode7_reverse2, test3) {
    EXPECT_EQ(solution.reverse2(1147483647), 0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
