// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <map>
#include "commoncppproblem697.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=697 lang=cpp
 *
 * [697] 数组的度
 */

// @lc code=start
class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]].push_back(i);
        vector<int> ele;
        int max = 0;
        for (auto x : mp)
        {
            if (x.second.size() > max)
                max = x.second.size();
        }
        int ans = 500001;
        for (auto x : mp)
        {
            int min_pos = 50001, max_pos = 0;
            if (x.second.size() == max)
            {
                for (auto pos : x.second)
                {
                    if (pos < min_pos)
                        min_pos = pos;
                    if (pos > max_pos)
                        max_pos = pos;
                }
                if (max_pos - min_pos + 1 < ans)
                    ans = max_pos - min_pos + 1;
            }
        }
        return ans;
    }
};
// @lc code=end
