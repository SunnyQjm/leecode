#include <iostream>
#include <gtest/gtest.h>
#include "solution.cpp"

using namespace std;

Solution solution;

TEST(Leecode4_findMedianSortedArrays, test0) {
    vector<int> nums1{1};
    vector<int> nums2{2, 3, 4};
    EXPECT_EQ(solution.fidMedianSortedArrays(nums1, nums2), 2.5);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

