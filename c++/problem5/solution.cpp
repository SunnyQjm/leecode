#include <string>

using namespace std;
class Solution  {
public:
    /***************************************
     * 暴力破解实现
     ***************************************/
    bool checkIsPalindrome(const string& s, int start, int end) {
        for(; start < end; start++, end--) {
            if(s.at(start) != s.at(end))
                return false;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int length = s.length();
        int resultLeftIndex = 0;
        int resultRightIndex = 0;
        for(int i = 0; i < length; i++) {
            for(int j = i; j < length; j++) {
                // 剪枝，比当前最长串短或者相等的不考虑
                if(j - i > resultRightIndex - resultLeftIndex && checkIsPalindrome(s, i, j)) {
                    resultLeftIndex = i;
                    resultRightIndex = j;
                }
            }
        }
        return s.substr(resultLeftIndex, resultRightIndex - resultLeftIndex + 1);
    }

    /*****************************************
     * 动态规划法
     *****************************************/

    string longestPalindrome2(string s) {
        int length = s.length();

        // 用来记录动态规划过程中的计算结果，减少重复的计算
        // 题目限定字符串的长度不超过1000，故设置二维数组的大小为1000x1000
        bool recordArr[1000][1000];
        for(int i = 0; i < length; i++) {
            recordArr[i][i] = true;
        }

        int resultLeftIndex = 0;
        int resultRightIndex = 0;

        for(int i = 0; i < length - 1; i++) {
            recordArr[i][i + 1] = (s.at(i) == s.at(i + 1));
            if(recordArr[i][i + 1]) {
                resultLeftIndex = i;
                resultRightIndex = i + 1;
            }
        }

        for(int i = 2; i < length; i++) {
            for(int j = 0; j < length - i; j++) {
                recordArr[j][j + i] = (s.at(j) == s.at(j + i) && recordArr[j + 1][j + i - 1]);
                if(recordArr[j][j + i]) {  // 有长度为(i + 1)的回文子串
                    resultLeftIndex = j;
                    resultRightIndex = j + i;
                }
            }
        }

        return s.substr(resultLeftIndex, resultRightIndex - resultLeftIndex + 1);
    }
};
