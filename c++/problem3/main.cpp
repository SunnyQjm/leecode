#include <iostream>

using namespace std;

/*************************************************
 * 暴力解法
 **************************************************/

bool judgeIsExists(const string& s, int start, int end, char target) {
    for(int i = start; i <= end; i++) {
        if(s.at(i) == target) {
            return true;
        }
    }
    return false;
}

int lengthOfLongestSubstring(const string& s) {
    int max = 0;
    bool change = false;
    for(int i = 0; i < s.size(); i++) {
        for(int j = i + 1; j < s.size(); j++) {
            if(judgeIsExists(s, i, j - 1, s.at(j))) {
                max = j - i > max ? j - i : max;
                change = true;
                break;
            }
        }
        if(!change) {
            max = s.size() - i > max ? s.size() - i : max;
        } else {
            change = false;
        }
    }
    return max;
}

/*************************************************
 * 双指针滑动窗口剪枝法
 *************************************************/
int judgeIsExists2(const string& s, int start, int end, char target) {
    for(int i = start; i <= end; i++) {
        if(s.at(i) == target) {
            return i;
        }
    }
    return -1;
}


int lengthOfLongestSubstring2(const string& s) {
    if(s.size () <= 1) {
        return s.size();
    }
    int left = 0;
    int right = 1;
    int max = 0;
    int repeatIndex = -1;
    while(left < s.size() - 1 && right < s.size()) {
        if((repeatIndex = judgeIsExists2(s, left, right - 1, s.at(right))) >= 0) {
            max = right - left > max ? right - left : max;
            left = repeatIndex + 1;
        } else {
            right++;
        }
    }
    max = right - left > max ? right - left : max;
    return max;
}

/***************************************************
 * HashMap 优化解法
 * ps: 这边数据域取值的大小固定，扩展ASCII最多有256个，用265个bool数组模拟hashmap即可
 ****************************************************/

int lengthOfLongestSubstring3(const string& s) {
    if(s.size () <= 1) {
        return s.size();
    }
    int map[256];
    for(int i = 0; i < 256; i++) {
        map[i] = -1;
    }
    int left = 0;
    int right = 1;
    int max = 0;
    int repeatIndex = -1;
    map[s.at(left)] = left;
    while(left < s.size() - 1 && right < s.size()) {
        if((repeatIndex = map[s.at(right)]) >= 0) {
            max = right - left > max ? right - left : max;
            for(int i = left; i <= repeatIndex; i++) {
                map[s.at(i)] = -1;
            }
            left = repeatIndex + 1;
        } else {
            map[s.at(right)] = right;
            right++;
        }
    }
    max = right - left > max ? right - left : max;
    return max;
}

int main() {
    cout << lengthOfLongestSubstring("abcabcbb") << endl;
    cout << lengthOfLongestSubstring("bbbbb") << endl;
    cout << lengthOfLongestSubstring("pwwkew") << endl;
    cout << lengthOfLongestSubstring(" ") << endl;

    
    /* cout << lengthOfLongestSubstring2("abcabcbb") << endl; */
    /* cout << lengthOfLongestSubstring2("bbbbb") << endl; */
    /* cout << lengthOfLongestSubstring2("pwwkew") << endl; */
    /* cout << lengthOfLongestSubstring2(" ") << endl; */
    
    cout << lengthOfLongestSubstring3("abcabcbb") << endl;
    cout << lengthOfLongestSubstring3("bbbbb") << endl;
    cout << lengthOfLongestSubstring3("pwwkew") << endl;
    cout << lengthOfLongestSubstring3(" ") << endl;
    return 0;
}
