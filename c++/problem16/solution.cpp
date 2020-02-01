#include <vector>
#include <set>
#include <algorithm>
#include <functional>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) {
            return 0;
        } else if(nums.size() == 3) {
            return nums[0] + nums[1] + nums[2];
        }

        // 对数组从小到大排序
        sort(nums.begin(), nums.end(), less<int>());

        int left, right, distance = abs(target - nums[0] - nums[1] - nums[2]), tmp,
            lastLeft, lastRight, result = nums[0] + nums[1] + nums[2];
        int last = nums[0] - 1;
        bool changeLeft = false;
        for(int i = 0; i < nums.size() - 2; i++) {
            if(nums[i] == last) {
                continue;
            }
            last = nums[i];
            left = i + 1;
            right = nums.size() - 1;
            lastLeft = nums[left] - 1;
            lastRight = nums[right] + 1;

            // 双指针法处理 two sum
            while(left < right) {
                if(changeLeft && nums[left] == lastLeft) {
                    left++;
                    continue;
                }
                if(!changeLeft && nums[right] == lastRight){
                    right--;
                    continue;
                }
                lastLeft = nums[left];
                lastRight = nums[right];
                
                tmp = target - (nums[i] + nums[left] + nums[right]);
                
                if(abs(tmp)  < distance) {
                    distance = abs(tmp);   
                    result = target - tmp;
                }

                if(tmp < 0) {       // tmp < 0 表示3数之和大于target，需要减小三数之和
                    changeLeft = false;
                    right--;
                } else {
                    changeLeft = true;
                    left++;
                }
            }
        }
        return result;
    }
};
