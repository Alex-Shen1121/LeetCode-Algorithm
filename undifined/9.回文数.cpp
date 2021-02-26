// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <cmath>
#include "commoncppproblem9.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        if (x == 0)
            return true;
        int n = int(log10(x)) + 1;
        for (int i = 0; i < n / 2; i++)
        {
            int left = x / pow(10, n - i - 1), right = x / pow(10, i);
            left %= 10, right %= 10;
            if (left != right)
                return false;
        }
        return true;
    }
};
// @lc code=end
