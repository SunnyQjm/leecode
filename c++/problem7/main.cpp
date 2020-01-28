#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/////////////////////////////////////////////////
/////// 字符串解法（先转成字符串，再转为int）
////////////////////////////////////////////////

int INT_MAX_VAL = 2147483647;
int INT_MIN_VAL = -2147483648;
long reverse(int x) {
    if(x == INT_MIN_VAL) {
        return 0;
    }
    bool isNegtive = x < 0 ? true : false;
    x = x < 0 ? -x : x;
    string tmp = to_string(x);
    stringstream ss;
    if(isNegtive) {
        ss << "-";
    }
    for(int i = tmp.length() - 1; i >= 0; i--) {
        ss << tmp.at(i);
    }
    long result = 0;
    ss >> result;
    if(result > INT_MAX_VAL || result < INT_MIN_VAL) {
        return 0;
    }
    return result;
}

int main() {
    cout << reverse(123) << endl;
    cout << reverse(-123) << endl;
    cout << reverse(120) << endl;
    cout << reverse(1147483647) << endl;
    return 0;
}
