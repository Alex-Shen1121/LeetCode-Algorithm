// @before-stub-for-debug-begin
#include <vector>
#include <algorithm>
#include <string>
#include "commoncppproblem561.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=561 lang=cpp
 *
 * [561] 数组拆分 I
 */

// @lc code=start
class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2)
            sum += nums[i];
        return sum;
    }
};
// @lc code=end
