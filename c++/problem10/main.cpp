#include <iostream>
#include <gtest/gtest.h>

using namespace std;

//////////////////////////////////////////////////////////
/////// 递归回溯解法
//////////////////////////////////////////////////////////

// 编写一个新的函数用来递归，用滑动下标的方式替代字符串裁剪
// （ps：大量的字符串裁剪是很耗时的）
bool _isMatch(const string &s, int sPosition, const string &p, int pPosition) {
    if(pPosition >= p.size()) {
        return sPosition >= s.size();
    } 
    bool firstMatch = sPosition < s.size() && (s.at(sPosition) == p.at(pPosition) || 
                                               p.at(pPosition) == '.');
    if(pPosition < p.size() - 1 && p.at(pPosition + 1) == '*') {
        return _isMatch(s, sPosition, p, pPosition + 2) || 
            (firstMatch && _isMatch(s, sPosition + 1, p, pPosition));
    } else {
        return firstMatch && _isMatch(s, sPosition + 1, p, pPosition + 1);
    }
}

bool isMatch(string s, string p) {
    return _isMatch(s, 0, p, 0);
}



//////////////////////////////////////////////////////////
///// 动态规划解法
//////////////////////////////////////////////////////////

bool isMatch2(string s, string p) {

}


TEST(Leecode10_isMatch, test0) {
    EXPECT_FALSE(isMatch("aa", "a"));
}

TEST(Leecode10_isMatch, test1) {
    EXPECT_TRUE(isMatch("aa", "a*"));
}
TEST(Leecode10_isMatch, test2) {
    EXPECT_TRUE(isMatch("ab", ".*"));
}
TEST(Leecode10_isMatch, test3) {
    EXPECT_TRUE(isMatch("aab", "c*a*b"));
}
TEST(Leecode10_isMatch, test4) {
    EXPECT_FALSE(isMatch("mississippi", "mis*is*p*."));
}
TEST(Leecode10_isMatch, test5) {
    EXPECT_FALSE(isMatch("aaa", "aaaa"));
}
TEST(Leecode10_isMatch, test6) {
    EXPECT_TRUE(isMatch("aaa", "a.a"));
}
TEST(Leecode10_isMatch, test7) {
    EXPECT_TRUE(isMatch("aaa", "ab*ac*a"));
}
TEST(Leecode10_isMatch, test8) {
    EXPECT_TRUE(isMatch("bbbba", ".*a*a"));
}
TEST(Leecode10_isMatch, test9) {
    EXPECT_FALSE(isMatch("ab", ".*..b"));
}
TEST(Leecode10_isMatch, test10) {
    EXPECT_FALSE(isMatch("bccbbabcaccacbcacaa", ".*b.*c*.*.*.c*a*.c"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

