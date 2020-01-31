#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode13_romanToInt, test0) {
    EXPECT_EQ(solution.romanToInt("III"), 3);
}

TEST(Leetcode13_romanToInt, test1) {
    EXPECT_EQ(solution.romanToInt("IV"), 4);
}

TEST(Leetcode13_romanToInt, test2) {
    EXPECT_EQ(solution.romanToInt("IX"), 9);
}

TEST(Leetcode13_romanToInt, test3) {
    EXPECT_EQ(solution.romanToInt("LVIII"), 58);
}

TEST(Leetcode13_romanToInt, test4) {
    EXPECT_EQ(solution.romanToInt("MCMXCIV"), 1994);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
