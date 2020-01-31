#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * 将一个给定字符串根据给定的行数，以从上往下、从左到右进行 Z 字形排列。
     *
     * 3行 => +4 +2 +4
     * 4行 => +8 (+6, +2) (+2, +6) +8
     */
    string convert(string s, int numRows) {
        int length = s.length();
        vector<char> result(length + 2);

        // 处理只有一行的特殊情况
        if(numRows == 1) {
            return s;
        }
        int bigestSpan = (numRows - 1) * 2;
        int globalIndex = 0;
        for(int i = 0; i < numRows; i++) {
            int first = bigestSpan - i * 2;
            int second = i * 2;
            if(first == 0 || second == 0) {
                for(int j = i; j < length; j += bigestSpan) {
                    result[globalIndex++] = s.at(j);
                }
            } else if (first == second) {
                for(int j = i; j < length; j += first) {
                    result[globalIndex++] = s.at(j);
                }
            } else {
                for(int j = i, k = 0; j < length; j += (k % 2 == 0) ? first : second, k++) {
                    result[globalIndex++] = s.at(j);
                }
            }
        }
        return string(result.data());
    }
};
