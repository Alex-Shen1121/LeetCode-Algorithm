// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem485.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */

// @lc code=start
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        vector<int> dp(nums.size());
        dp[0] = nums[0] == 1 ? 1 : 0;
        for (int i = 1; i < nums.size(); i++)
            dp[i] = nums[i] == 1 ? dp[i - 1] + 1 : 0;
        return *max_element(dp.begin(), dp.end());
    }
};
// @lc code=end
