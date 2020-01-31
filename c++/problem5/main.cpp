#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode5_longestPalindrome, test0) {
    EXPECT_EQ(solution.longestPalindrome("babad"), "bab");
}

TEST(Leetcode5_longestPalindrome, test1) {
    EXPECT_EQ(solution.longestPalindrome("cbbd"), "bb");
}

TEST(Leetcode5_longestPalindrome2, test0) {
    EXPECT_EQ(solution.longestPalindrome2("babad"), "aba");
}

TEST(Leetcode5_longestPalindrome2, test1) {
    EXPECT_EQ(solution.longestPalindrome2("cbbd"), "bb");
}

TEST(Leetcode5_longestPalindrome2, test2) {
    EXPECT_EQ(solution.longestPalindrome2("abcba"), "abcba");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

