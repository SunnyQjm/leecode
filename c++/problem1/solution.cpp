#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        map<int, int> unom;
        for(int i = 0; i < nums.size(); i++) {
            auto iterator = unom.find(target - nums[i]);
            if(iterator != unom.end()) {
                results.push_back((*iterator).second);
                results.push_back(i);
                return results;
            }
            unom.emplace(nums[i], i);
        }
        return results;
    }
};
