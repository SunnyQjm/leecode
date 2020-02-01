#include <iostream>
#include <gtest/gtest.h>
#include <algorithm>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode17_letterCombinations, test0) {
    auto result = solution.letterCombinations("23");
    sort(result.begin(), result.end(), less<string>());
    string tmp = "";
    for(const string& s : result) {
        tmp += s;
    }
    EXPECT_EQ(tmp, "adaeafbdbebfcdcecf");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
