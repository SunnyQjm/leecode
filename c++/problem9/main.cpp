#include <iostream>

using namespace std;

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
int main() {
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(-121) << endl;
    cout << isPalindrome(10) << endl;
    return 0;
}
