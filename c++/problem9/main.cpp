#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode9_isPalindrome, test0) {
    EXPECT_TRUE(solution.isPalindrome(121));
}

TEST(Leetcode9_isPalindrome, test1) {
    EXPECT_FALSE(solution.isPalindrome(-121));
}

TEST(Leetcode9_isPalindrome, test2) {
    EXPECT_FALSE(solution.isPalindrome(10));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
