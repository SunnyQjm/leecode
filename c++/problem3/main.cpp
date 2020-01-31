#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leecode3_lengthOfLongestSubstring, test0) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("abcabcbb"), 3);
}

TEST(Leecode3_lengthOfLongestSubstring, test1) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("bbbbb"), 1);
}

TEST(Leecode3_lengthOfLongestSubstring, test2) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("pwwkew"), 3);
}

TEST(Leecode3_lengthOfLongestSubstring, test3) {
    EXPECT_EQ(solution.lengthOfLongestSubstring(" "), 1);
}


TEST(Leecode3_lengthOfLongestSubstring2, test0) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("abcabcbb"), 3);
}

TEST(Leecode3_lengthOfLongestSubstring2, test1) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("bbbbb"), 1);
}

TEST(Leecode3_lengthOfLongestSubstring2, test2) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("pwwkew"), 3);
}

TEST(Leecode3_lengthOfLongestSubstring2, test3) {
    EXPECT_EQ(solution.lengthOfLongestSubstring(" "), 1);
}

TEST(Leecode3_lengthOfLongestSubstring3, test0) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("abcabcbb"), 3);
}

TEST(Leecode3_lengthOfLongestSubstring3, test1) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("bbbbb"), 1);
}

TEST(Leecode3_lengthOfLongestSubstring3, test2) {
    EXPECT_EQ(solution.lengthOfLongestSubstring("pwwkew"), 3);
}

TEST(Leecode3_lengthOfLongestSubstring3, test3) {
    EXPECT_EQ(solution.lengthOfLongestSubstring(" "), 1);
}



int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
