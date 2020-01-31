#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        string s = to_string(x);
        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
            if(s.at(i) != s.at(j))
                return false;
        }
        return true;
    }
};
