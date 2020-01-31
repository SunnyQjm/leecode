#include <string>

using namespace std;

class Solution {
public:
    string repeatN(const string& s, int times) {
        string results = "";
        for(int i = 0; i < times; i++) {
            results += s;
        }
        return results;
    }

    string easyDeal(int hundredNum, string firstChar, string fiveChar, string tenChar) {
        string result = "";
        if(hundredNum <= 3) {
            result += repeatN(firstChar, hundredNum);
        } else if (hundredNum == 4) {
            result += (firstChar + fiveChar);
        } else if(hundredNum == 9) {
            result += (firstChar + tenChar);
        } else {
            result += fiveChar;
            result += repeatN(firstChar, hundredNum - 5);
        }
        return result;
    }

    string intToRoman(int num) {
        int thousandNum = num / 1000;
        num %= 1000;
        int hundredNum = num / 100;
        num %= 100;
        int tenNum = num / 10;
        num %= 10;
        
        string result = "";

        // 处理千位
        result += repeatN("M", thousandNum);

        // 处理百位
        result += easyDeal(hundredNum, "C", "D", "M");

        // 处理十位
        result += easyDeal(tenNum, "X", "L", "C");

        // 处理各位
        result += easyDeal(num, "I", "V", "X");
        return result;
    } 
};
