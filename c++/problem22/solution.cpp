#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> _generateParentthesis(int leftNum, int rightNum) {
        vector<string> v;
        if(rightNum < leftNum) {
            return v;
        }
        if(leftNum == 0) {
            string tmp = "";
            for(int i = 0; i < rightNum; i++) {
                tmp += ")";
            }
            v.push_back(tmp);
            return v;
        } else if (rightNum == 0) {
            return v;
        }

        for(auto &s : _generateParentthesis(leftNum - 1, rightNum)) {
            v.push_back("(" + s);
        }

        for(auto &s : _generateParentthesis(leftNum, rightNum - 1)) {
            v.push_back(")" + s);
        }
        // leftNum 和 rightNum 都不为0的情况
        return v;
    }
    /**
     * 给出 n 代表生成括号的对数，请你写出一个函数，使其能够生成所有可能的并且有效的括号组合。
     */
    vector<string> generateParenthesis(int n) {
        return _generateParentthesis(n, n);
    }
};
