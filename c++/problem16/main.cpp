#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode16_threeSumClosest, test0) {
    vector<int> v = {-1, 2, 1, -4};
    EXPECT_EQ(solution.threeSumClosest(v, 1), 2);
}

TEST(Leetcode16_threeSumClosest, test1) {
    vector<int> v = {0, 2, 1, -3};
    EXPECT_EQ(solution.threeSumClosest(v, 1), 0);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
