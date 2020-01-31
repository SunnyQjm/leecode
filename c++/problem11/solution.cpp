#include <vector>
using namespace std;

class Solution {
public:

    /**
     * 双指针法
     * 1. 一开始两个指针分别在头尾
     * 2. 将指向较矮高度的指针向另一个指针的方向移动
     * 3. 重复2直至两指针相遇
     *
     * 简单证明想法：
                  |
           |      |
           |      |
     ......|......|......
———————————————————————————————————————
           m      n
     若ｍ和ｎ为目标位置，则ｍ左边的必定都比ｍ小，ｎ右边的必定都比ｎ小，所以每次抉择时需要舍弃短的
     */
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int maxArea = 0;
        int tmp;
        while(i < j) {
            if(height[i] > height[j]) {
                tmp = (j - i) * height[j];
                j--;
            } else {
                tmp = (j - i) * height[i];
                i++;
            }
            if(tmp > maxArea) {
                maxArea = tmp;
            }
        }
        return maxArea;
    }
};
