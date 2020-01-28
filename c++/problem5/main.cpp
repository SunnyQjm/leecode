#include <iostream>

using namespace std;


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
            if(j - i > resultRightIndex - resultLeftIndex && checkIsPalindrome(s, i, j)) {
                resultLeftIndex = i;
                resultRightIndex = j;
            }
        }
    }
    return s.substr(resultLeftIndex, resultRightIndex - resultLeftIndex + 1);
}

int main() {
    cout << longestPalindrome("babad") << endl;
    cout << longestPalindrome("cbbd") << endl;
    return 0;
}
