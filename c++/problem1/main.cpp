#include <iostream>
#include "solution.cpp"
#include <gtest/gtest.h>

using namespace std;

TEST(Leecode1_twoSum, test0) {
    Solution solution;
    vector<int> test{2, 7, 11, 15};
    auto result = solution.twoSum(test, 9);
    EXPECT_EQ(result[0], 0);
    EXPECT_EQ(result[1], 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}

