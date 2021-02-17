// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include "commoncppproblem645.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> ans;
        int num1 = -1, num2 = -1;

        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        for (int i = 1; i <= nums.size(); i++)
        {
            if (m.count(i) == 0)
                num2 = i;
            if (m[i] == 2)
                num1 = i;
            if (num1 != -1 && num2 != -1)
                break;
        }
        ans.push_back(num1);
        ans.push_back(num2);
        return ans;
    }
};
// @lc code=end
