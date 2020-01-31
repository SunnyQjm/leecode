#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leecode10_isMatch, test0) {
    EXPECT_FALSE(solution.isMatch("aa", "a"));
}

TEST(Leecode10_isMatch, test1) {
    EXPECT_TRUE(solution.isMatch("aa", "a*"));
}
TEST(Leecode10_isMatch, test2) {
    EXPECT_TRUE(solution.isMatch("ab", ".*"));
}
TEST(Leecode10_isMatch, test3) {
    EXPECT_TRUE(solution.isMatch("aab", "c*a*b"));
}
TEST(Leecode10_isMatch, test4) {
    EXPECT_FALSE(solution.isMatch("mississippi", "mis*is*p*."));
}
TEST(Leecode10_isMatch, test5) {
    EXPECT_FALSE(solution.isMatch("aaa", "aaaa"));
}
TEST(Leecode10_isMatch, test6) {
    EXPECT_TRUE(solution.isMatch("aaa", "a.a"));
}
TEST(Leecode10_isMatch, test7) {
    EXPECT_TRUE(solution.isMatch("aaa", "ab*ac*a"));
}
TEST(Leecode10_isMatch, test8) {
    EXPECT_TRUE(solution.isMatch("bbbba", ".*a*a"));
}
TEST(Leecode10_isMatch, test9) {
    EXPECT_FALSE(solution.isMatch("ab", ".*..b"));
}
TEST(Leecode10_isMatch, test10) {
    EXPECT_FALSE(solution.isMatch("bccbbabcaccacbcacaa", ".*b.*c*.*.*.c*a*.c"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

