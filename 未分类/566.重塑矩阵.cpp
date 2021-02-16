// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <queue>
#include "commoncppproblem566.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        if (nums.size() * nums[0].size() != r * c)
            return nums;
        queue<int> data;
        for (auto x : nums)
            for (auto y : x)
                data.push(y);
        vector<vector<int>> ans;
        for (int i = 0; i < r; i++)
        {
            ans.push_back(vector<int>());
            for (int j = 0; j < c; j++)
            {
                ans[i].push_back(data.front());
                data.pop();
            }
        }
        return ans;
    }
};
// @lc code=end
