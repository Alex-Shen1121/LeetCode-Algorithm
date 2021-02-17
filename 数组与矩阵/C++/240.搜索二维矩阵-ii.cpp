// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem240.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = m - 1, col = 0;
        while (row >= 0 && col <= n - 1)
        {
            if (target > matrix[row][col])
                col++;
            else if (target < matrix[row][col])
                row--;
            else if (target == matrix[row][col])
                return true;
        }
        return false;
    }
};
// @lc code=end
