#include <string>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:

    map<char, string> numMap = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, 
        {'8', "tuv"}, {'9', "wxyz"}
    };

    string charToString(char c) {
        string s = "";
        s.append(1, c);
        return s;
    }
    vector<string> _letterCombinations(const string& digits, int start) {
        if(start >= digits.size()) {
            return {};
        }
        vector<string> v;
        auto leftArr = _letterCombinations(digits, start + 1);
        if(leftArr.size() == 0) {
            for(const char c : numMap[digits.at(start)]) {
                v.push_back(charToString(c));
            }
            return v;
        }
        for(const string& s : _letterCombinations(digits, start + 1)) {
            for(const char c : numMap[digits.at(start)]) {
                v.push_back(charToString(c) + s);
            }
        }
        return v;
    }
    vector<string> letterCombinations(string digits) {
        return _letterCombinations(digits, 0);
    }
};
