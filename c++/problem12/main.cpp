#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode12_intToRoman, test0) {
    EXPECT_EQ(solution.intToRoman(3), "III");
}


TEST(Leetcode12_intToRoman, test1) {
    EXPECT_EQ(solution.intToRoman(4), "IV");
}


TEST(Leetcode12_intToRoman, test2) {
    EXPECT_EQ(solution.intToRoman(9), "IX");
}


TEST(Leetcode12_intToRoman, test3) {
    EXPECT_EQ(solution.intToRoman(58), "LVIII");
}


TEST(Leetcode12_intToRoman, test4) {
    EXPECT_EQ(solution.intToRoman(1994), "MCMXCIV");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
