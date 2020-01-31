#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) {
            return "";
        }
        string s;
        int minSize = strs[0].size();
        for(int i = 1; i < strs.size(); i++) {
            if(strs[i].size() < minSize) {
                minSize = strs[i].size();
            }
        }
        char tmp;
        for(int i = 0; i < minSize; i++) {
            tmp = strs[0].at(i);
            for(int j = 1; j < strs.size(); j++) {
                if(tmp != strs[j].at(i)) {
                    goto finish;
                }
            }
            s += tmp;
        }
finish:
        return s;
    }
};
