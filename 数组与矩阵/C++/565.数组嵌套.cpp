// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem565.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=565 lang=cpp
 *
 * [565] 数组嵌套
 */

// @lc code=start
class Solution
{
public:
    int arrayNesting(vector<int> &nums)
    {
        int n = nums.size();
        vector<bool> visited(n, false);
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            while (visited[i] == false)
            {
                cnt++;
                visited[i] = true;
                i = nums[i];
            }
            if (max < cnt)
                max = cnt;
        }
        return max;
    }
};
// @lc code=end
