// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem667.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=667 lang=cpp
 *
 * [667] 优美的排列 IIz'xzx
 */

// @lc code=start
class Solution
{
public:
    vector<int> constructArray(int n, int k)
    {
        vector<int> ans;
        int i = 1, j = i + k;
        while (j > i)
        {
            ans.push_back(i++);
            ans.push_back(j--);
            if (i == j)
                ans.push_back(i);
        }
        for (int i = k + 2; i <= n; i++)
            ans.push_back(i);
        return ans;
    }
};
// @lc code=end
