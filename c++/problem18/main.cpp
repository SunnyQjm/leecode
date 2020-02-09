#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode18_fourSum, test0) {
    vector<int> v = {1, 0, -1, 0, -2, 2};
    auto result = solution.fourSum(v, 0);
    string tmp = "";
    for(auto& arr : result) {
        for(auto item : arr) {
            tmp += to_string(item);
        }
    }
    EXPECT_EQ(tmp, "-2-112-2002-1001");
}

TEST(Leetcode18_fourSum, test1) {
    vector<int> v = {1, -2, -5, -4, -3, 3, 3, 5};
    auto result = solution.fourSum(v, -11);
    string tmp = "";
    for(auto& arr : result) {
        for(auto item : arr) {
            tmp += to_string(item);
        }
    }
    EXPECT_EQ(tmp, "-5-4-31");
}

TEST(Leetcode18_fourSum, test2) {
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    auto result = solution.fourSum(v, -1);
    string tmp = "";
    for(auto& arr : result) {
        for(auto item : arr) {
            tmp += to_string(item);
        }
    }
    EXPECT_EQ(tmp, "-4012-1-101");
}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
