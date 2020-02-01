#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leetcode15_threeSum, test0) {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    auto result = solution.threeSum(nums);
    string s = "";
    for(auto &arr : result) {
        for(auto i : arr) {
            s += to_string(i);
        }
    }
    EXPECT_EQ(s, "-1-12-101");
}

TEST(Leetcode15_threeSum, test1) {
    vector<int> nums = {0, 0, 0};
    auto result = solution.threeSum(nums);
    string s = "";
    for(auto &arr : result) {
        for(auto i : arr) {
            s += to_string(i);
        }
    }
    EXPECT_EQ(s, "000");
}

TEST(Leetcode15_threeSum, test2) {
    vector<int> nums = {-1, 0, 1, 0};
    auto result = solution.threeSum(nums);
    string s = "";
    for(auto &arr : result) {
        for(auto i : arr) {
            s += to_string(i);
        }
    }
    EXPECT_EQ(s, "-101");
}

TEST(Leetcode15_threeSum, test3) {
    vector<int> nums = {1, -1, -1, 0};
    auto result = solution.threeSum(nums);
    string s = "";
    for(auto &arr : result) {
        for(auto i : arr) {
            s += to_string(i);
        }
    }
    EXPECT_EQ(s, "-101");
}

TEST(Leetcode15_threeSum, test4) {
    vector<int> nums = {-4, -2, -1};
    auto result = solution.threeSum(nums);
    string s = "";
    for(auto &arr : result) {
        for(auto i : arr) {
            s += to_string(i);
        }
    }
    EXPECT_EQ(s, "");
}



int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
