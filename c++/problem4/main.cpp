#include <iostream>
#include <vector>
using namespace std;

double fidMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int totalSize = nums1.size() + nums2.size();
    int medianNum = totalSize % 2 == 1 ?  1 : 2;
    int median = totalSize / 2;

    // 处理其中一个数组为空的情况
    if(nums1.size() == 0) {
        if(medianNum == 1) {
            return nums2[median];
        } else {
            return (nums2[median - 1] + nums2[median]) / 2.0;
        }
    } else if(nums2.size() == 0) {
        if(medianNum == 1) {
            return nums1[median];
        } else {
            return (nums1[median - 1] + nums1[median]) / 2.0;
        }
    }

    // 下面处理两个数组都不为空的情况
    int first = 0;
    int second = 0;
    int total = 0;
    int firstNum;
    while(total < median && first < nums1.size() && second < nums2.size()) {
        if(nums1[first] > nums2[second]) {
            firstNum = nums2[second];
            second++;
        } else {
            firstNum = nums1[first];
            first++;
        }
        total++;
    }
    int secondNum;
    if(total >= median) {
        if(first >= nums1.size()) {
            secondNum = nums2[second];
        } else if(second >= nums2.size()) {
            secondNum = nums1[first];
        } else {
            secondNum = nums1[first] < nums2[second] ? nums1[first] : nums2[second];
        }
    } else if (first >= nums1.size()) {     // 第一个数组已经遍历结束了
        firstNum = nums2[second + (median - total - 1)];
        secondNum = nums2[second + (median - total)];
    } else {                                // 第二个数组已经遍历结束了
        firstNum = nums1[first + (median - total - 1)];
        secondNum = nums1[first + (median - total)];
    }

    if(medianNum == 1) {
        return secondNum;
    } else {
        return (firstNum + secondNum) / 2.0;
    }
}

int main() {
    vector<int> nums1{1};
    vector<int> nums2{2, 3, 4};
    cout << fidMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}
