#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode14_longestCommonPrefix, test0) {
    vector<string> v = {"flower", "flow", "flight"};
    EXPECT_EQ(solution.longestCommonPrefix(v), "fl");
}

TEST(Leetcode14_longestCommonPrefix, test1) {
    vector<string> v = {"dog", "racecar", "car"};
    EXPECT_EQ(solution.longestCommonPrefix(v), "");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
