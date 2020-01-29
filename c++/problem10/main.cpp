#include <iostream>

using namespace std;

//////////////////////////////////////////////////////////
/////// 递归回溯解法(提交leecode超时，已知的测试样例均通过)
//////////////////////////////////////////////////////////

// 编写一个新的函数用来递归，用滑动下标的方式替代字符串裁剪
// （ps：大量的字符串裁剪是很耗时的）
bool _isMatch(const string &s, int sPosition, const string &p, int pPosition, char lastP) {
    if(sPosition >= s.size()) {
        if(pPosition >= p.size()) {
            return true;
        }

        // 处理特殊情况： bbbba .*a*a
        if(p.at(pPosition) == '*' && _isMatch(s, sPosition - 1, p, pPosition + 1, ' ')) {
            return true;
        }
        for(int i = pPosition + ((p.size() - pPosition) % 2 == 0 ? 1 : 0); i < p.size(); i += 2) {
            if(p.at(i) != '*') {
                return false;
            }
        }
        return true;
    } else if(pPosition >= p.size()) {
        return false;
    }
    int i, j;
    for(i = sPosition, j = pPosition; i < s.size() && j < p.size();) {
        // 剪枝操作，跳过不需要的过多的递归
        if(s.at(i) == p.at(j)) {
            lastP = p.at(j);
            i++, j++;
            continue;
        }

        if(p.at(j) == '.') {
            lastP = '.';
            i++, j++;
            continue;
        } else if (p.at(j) == '*') {
            if(lastP == '.') {
                if(_isMatch(s, i - 1, p, j + 1, ' ') || 
                   _isMatch(s, i, p, j + 1, ' ')) {
                    return true;
                }
                // *占据n个位置的情况
                for(; i < s.size(); i++) {
                    if(_isMatch(s, i + 1, p, j, '.')) {
                        return true;
                    }
                }
                return false;
            } else if(lastP >= 'a' && lastP <= 'z'){
                return _isMatch(s, i - 1, p, j + 1, ' ') || 
                    _isMatch(s, i, p, j + 1, ' ') || 
                    (s.at(i) == lastP && _isMatch(s, i + 1, p, j, lastP));
            } else {
                return false;
            }
        } else if ((j < p.size() - 1) && (p.at(j + 1) == '*')) {        // aab c*a*b
            return _isMatch(s, i, p, j + 2, ' ');
        } else {
            return false;
        }
    }
    return _isMatch(s, i, p, j, ' ');
}

bool isMatch(string s, string p) {
    return _isMatch(s, 0, p, 0, ' ');
}

int main() {
    cout << isMatch("aa", "a") << endl;
    cout << isMatch("aa", "a*") << endl;
    cout << isMatch("ab", ".*") << endl;
    cout << isMatch("aab", "c*a*b") << endl;
    cout << isMatch("mississippi", "mis*is*p*.") << endl;
    cout << isMatch("aaa", "aaaa") << endl;
    cout << isMatch("aaa", "a.a") << endl;
    cout << isMatch("aaa", "ab*ac*a") << endl;
    cout << isMatch("bbbba", ".*a*a") << endl;
    cout << isMatch("ab", ".*..") << endl;
    cout << isMatch("bccbbabcaccacbcacaa", ".*b.*c*.*.*.c*a*.c") << endl;
    return 0;
}

