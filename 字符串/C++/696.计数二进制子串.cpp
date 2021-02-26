// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem696.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=696 lang=cpp
 *
 * [696] 计数二进制子串
 */

// @lc code=start
class Solution
{
public:
    int countBinarySubstrings(string s)
    {
        int length = s.length();
        vector<int> count;
        int cnt = 0;
        char ch = s[0];
        for (int i = 0; i < length; i++)
        {
            if (s[i] == ch)
                cnt++;
            else
            {
                ch = s[i];
                count.push_back(cnt);
                cnt = 1;
            }
        }
        count.push_back(cnt);
        int ans = 0;
        for (int i = 1; i < count.size(); i++)
            ans += min(count[i], count[i - 1]);
        return ans;
    }
};
// @lc code=end
