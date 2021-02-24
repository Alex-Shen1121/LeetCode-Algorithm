// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem647.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=647 lang=cpp
 *
 * [647] 回文子串
 */

// @lc code=start
class Solution
{
public:
    int count(string s, int i, int j)
    {
        int cnt = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j])
        {
            i--;
            j++;
            cnt++;
        }
        return cnt;
    }

    int countSubstrings(string s)
    {
        int n = s.length(), ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += count(s, i, i);
            ans += count(s, i, i + 1);
        }
        return ans;
    }
};
// @lc code=end
