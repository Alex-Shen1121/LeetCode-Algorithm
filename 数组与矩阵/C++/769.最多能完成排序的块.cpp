// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem769.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=769 lang=cpp
 *
 * [769] 最多能完成排序的块
 */

// @lc code=start
class Solution
{
public:
    int maxChunksToSorted(vector<int> &arr)
    {
        int cnt = 0;
        int Max = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            Max = max(Max, arr[i]);
            if (Max == i)
                cnt++;
        }
        return cnt;
    }
};
// @lc code=end
