#include <string>
using namespace std;

class Solution {
public:
    //////////////////////////////////////////////////////////
    /////// 递归回溯解法
    //////////////////////////////////////////////////////////

    // 编写一个新的函数用来递归，用滑动下标的方式替代字符串裁剪
    // （ps：大量的字符串裁剪是很耗时的）
    bool _isMatch(const string &s, int sPosition, const string &p, int pPosition) {
        if(pPosition >= p.size()) {
            return sPosition >= s.size();
        } 
        bool firstMatch = sPosition < s.size() && (s.at(sPosition) == p.at(pPosition) || 
                                                   p.at(pPosition) == '.');
        if(pPosition < p.size() - 1 && p.at(pPosition + 1) == '*') {
            return _isMatch(s, sPosition, p, pPosition + 2) || 
                (firstMatch && _isMatch(s, sPosition + 1, p, pPosition));
        } else {
            return firstMatch && _isMatch(s, sPosition + 1, p, pPosition + 1);
        }
    }

    bool isMatch(string s, string p) {
        return _isMatch(s, 0, p, 0);
    }



    //////////////////////////////////////////////////////////
    ///// 动态规划解法
    //////////////////////////////////////////////////////////

    bool isMatch2(string s, string p) {

    }


};
