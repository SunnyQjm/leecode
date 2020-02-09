#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // 预先处理数组大小小于等于4的特殊情况
        if(nums.size() < 4) {
            return {};
        } else if(nums.size() == 4) {
            if(nums[0] + nums[1] + nums[2] + nums[3] == target) {
                return {nums};
            } else {
                return {};
            }
        }

        // 按从小到大排序
        sort(nums.begin(), nums.end(), less<int>());

        int firstLast = nums[0] - 1;
        int secondLast, left, right, leftLast, rightLast, tmp;
        vector<vector<int>> result;
        for(int i = 0; i < nums.size() - 3; i++) {
            // 跳过重复的数字
            if(nums[i] == firstLast) {
                continue;
            }
            firstLast = nums[i];

            // 第一个数比target大，后面的数均比target大，加起来不可能等于target
            if(nums[i] > target && nums[i] + 1 >= 0) {
                continue;
            }

            secondLast = nums[i] - 1;
            for(int j = i + 1; j < nums.size() - 2; j++) {
                if(nums[j] == secondLast) {
                    continue;
                }
                secondLast = nums[j];
                if(nums[i] + nums[j] > target && nums[j + 1] >= 0) {
                    continue;
                }
                leftLast = nums[j] - 1;
                rightLast = nums[nums.size() - 1] + 1;
                left = j + 1;
                right = nums.size() - 1;

                // 双指针处理 two sum
                while(left < right) {
                    if(nums[left] == leftLast) {
                        left++;
                        continue;
                    }
                    if(nums[right] == rightLast) {
                        right--;
                        continue;
                    }
                    tmp = nums[i] + nums[j] + nums[left] + nums[right];
                    if(tmp == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        leftLast = nums[left];
                        rightLast = nums[right];
                        left++, right--;
                    } else if(tmp > target) {
                        right--;
                    } else {
                        left++;
                    }
                }
            }
        }
        return result;
    }
};
