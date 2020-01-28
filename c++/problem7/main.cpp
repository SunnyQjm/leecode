#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/////////////////////////////////////////////////
/////// 字符串解法（先转成字符串，再转为int）
////////////////////////////////////////////////

int INT_MAX_VAL = 2147483647;
int INT_MIN_VAL = -2147483648;
int reverse(int x) {
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

/////////////////////////////////////////////////
/////// 直接数学计算解法
/////////////////////////////////////////////////
int reverse2(int x) {
    if(x == INT_MIN_VAL) {
        return 0;
    }
    bool isNegtive = x < 0 ? true : false;
    x = x < 0 ? -x : x;
    long result = 0;
    while(x > 0) {
        int tmp = x % 10;
        x /= 10;
        result = result * 10 + tmp;
    }
    if(isNegtive) {
        result = -result;
    }
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
    
    cout << "==============" << endl;
    cout << reverse(123) << endl;
    cout << reverse(-123) << endl;
    cout << reverse(120) << endl;
    cout << reverse(1147483647) << endl;
    return 0;
}
