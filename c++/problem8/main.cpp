#include <iostream>

using namespace std;

int INT_MAX_VAL = 2147483647;
int INT_MIN_VAL = -2147483648;

int myAtoi(string str) {
    if(str.size() == 0) {
        return 0;
    }
    bool find = false;
    long result = 0;
    bool isNegtive = false;
    bool isRecordMark = false;
    bool isRecodZero = false;
    for(const char& c : str) {
        if(!find) {
            if(c == ' ') {
                if(isRecordMark) {
                    return 0;
                }
                continue;
            } else if (c == '0') {
                isRecordMark = true;
                continue;
            } else if (c == '+') {
                if(isRecordMark) {
                    return 0;
                }
                isRecordMark = true;
            } else if (c == '-') {
                if(isRecordMark) {
                    return 0;
                }
                isNegtive = true;
                isRecordMark = true;
            } else if(c >= '1' && c <= '9') {
                find = true;
                result = (c - '0');
            } else {
                return 0;
            }
        } else {
            if(c >= '0' && c <= '9') {
                result = result * 10 + (c - '0');
                if(result > INT_MAX_VAL) {
                    break;
                }
            } else {
                break;
            }
        }
    }
    if(isNegtive) {
        result = -result;
    }
    if(result > INT_MAX_VAL) {
        return INT_MAX_VAL;
    } else if(result < INT_MIN_VAL) {
        return INT_MIN_VAL;
    } else {
        return result;
    }
}
int main() {
    cout << myAtoi("42") << endl;
    cout << myAtoi("     -42") << endl;
    cout << myAtoi("4139 with sdfa ") << endl;
    cout << myAtoi("df42") << endl;
    cout << myAtoi("2147483649") << endl;
    return 0;
}
