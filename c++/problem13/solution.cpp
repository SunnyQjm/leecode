#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int length = s.size();
        for (int i = 0; i < length; i++) {
            switch(s.at(i)) {
            case 'M':
                result += 1000;
                break;
            case 'D':
                result += 500;
                break;
            case 'C':
                if(i < length - 1 && (s.at(i + 1) == 'M' || s.at(i + 1) == 'D')) {
                    result -= 100;
                } else {
                    result += 100;
                }
                break;
            case 'L':
                result += 50;
                break;
            case 'X':
                if(i < length - 1 && (s.at(i + 1) == 'L' || s.at(i + 1) == 'C')) {
                    result -= 10;
                } else {
                    result += 10;
                }
                break;
            case 'V':
                result += 5;
                break;
            case 'I':
                if(i < length - 1 && (s.at(i + 1) == 'V' || s.at(i + 1) == 'X')) {
                    result -= 1;
                } else {
                    result += 1;
                }
                break;
            }
        }
        return result;
    }
};
