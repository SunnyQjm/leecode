#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode22_generateParenthesis, test0) {
    vector<string> result = solution.generateParenthesis(3);
    for(auto s : result) {
        cout << s << endl;
    }
    EXPECT_EQ(result.size(), 5);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
