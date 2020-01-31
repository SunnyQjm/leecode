#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;
Solution solution;

TEST(Leetcode8_myAtoi, test0) {
    EXPECT_EQ(solution.myAtoi("42"), 42);
}

TEST(Leetcode8_myAtoi, test1) {
    EXPECT_EQ(solution.myAtoi("      -42"), -42);
}

TEST(Leetcode8_myAtoi, test2) {
    EXPECT_EQ(solution.myAtoi("4239 with sdfa"), 4239);
}

TEST(Leetcode8_myAtoi, test3) {
    EXPECT_EQ(solution.myAtoi("df42"), 0);
}

TEST(Leetcode8_myAtoi, test4) {
   EXPECT_EQ(solution.myAtoi("2147483649"), 2147483647);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
