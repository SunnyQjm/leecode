#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode20_isValid, test0) {
    EXPECT_TRUE(solution.isValid("()"));
}

TEST(Leetcode20_isValid, test1) {
    EXPECT_TRUE(solution.isValid("()[]{}"));
}

TEST(Leetcode20_isValid, test2) {
    EXPECT_TRUE(solution.isValid("{[]}"));
}

TEST(Leetcode20_isValid, test3) {
    EXPECT_FALSE(solution.isValid("(]"));
}

TEST(Leetcode20_isValid, test4) {
    EXPECT_FALSE(solution.isValid("([)]"));
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
