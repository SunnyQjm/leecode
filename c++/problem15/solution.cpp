#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3 ) {
            return {};
        } else if (nums.size() == 3) {
            if(nums[0] + nums[1] + nums[2] == 0) {
                return {nums};
            } else {
                return {};
            }
        }
        // 将数组按升序排序
        sort(nums.begin(), nums.end(), less<int>());
        int last = 0;
        int left, right, lastLeft, lastRight, tmp;
        vector<vector<int>> result;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 0) {
                if(nums[i] == 0 && i < nums.size() - 2 && nums[i + 1] == 0 && nums[i + 2] == 0) {
                    result.push_back({0, 0, 0});
                }
                break;
            }
            if(nums[i] == last) {
                continue;
            }
            left = i + 1;
            right = nums.size() - 1;
            lastLeft = nums[left] - 1;
            lastRight = nums[right] + 1;
            while(left < right) {
                if(nums[left] == lastLeft) {
                    left++;
                    continue;
                }
                if(nums[right] == lastRight){
                    right--;
                    continue;
                }
                tmp = nums[left] + nums[right];

                if(tmp == -nums[i]) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    lastLeft = nums[left];
                    lastRight = nums[right];
                    left++, right--;
                } else if(tmp + nums[i] > 0) {
                    right--;
                } else {
                    left++;
                }
            }
            last = nums[i];
        }
        return result;
    }
};
