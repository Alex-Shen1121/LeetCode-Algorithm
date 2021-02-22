// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <map>
#include "commoncppproblem409.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution
{
public:
    int longestPalindrome(string s)
    {
        map<char, int> mp;
        for (char ch : s)
            mp[ch]++;
        bool existOdd = false;
        int cnt = 0;
        for (auto it : mp)
        {
            if (!existOdd)
            {
                if (it.second % 2 == 1)
                    existOdd = true;
            }
            cnt += it.second % 2 == 0 ? it.second : it.second - 1;
        }
        return existOdd ? cnt + 1 : cnt;
    }
};
// @lc code=end
