#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;
Solution solution;

TEST(Leetcode11_maxArea, test0) {
    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    EXPECT_EQ(solution.maxArea(v), 49);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
