#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
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

int main()
{
    vector<int> test{2, 7, 11, 15};
    auto result = twoSum(test, 9);
    for(auto item : result) {
        cout << item << " ";
    }
    std::cout << "Hello world" << std::endl;
    return 0;
}

