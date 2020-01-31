#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode6_convert, test0) {
    EXPECT_EQ(solution.convert("LEETCODEISHIRING", 3), "LCIRETOESIIGEDHN");
}

TEST(Leetcode6_convert, test1) {
    EXPECT_EQ(solution.convert("LEETCODEISHIRING", 4), "LDREOEIIECIHNTSG");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
