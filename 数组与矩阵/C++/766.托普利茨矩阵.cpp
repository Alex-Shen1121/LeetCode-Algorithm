// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem766.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=766 lang=cpp
 *
 * [766] 托普利茨矩阵
 */

// @lc code=start
class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        for (int I = 0; I < n; I++)
        {
            //对角线起点在第一行
            int i = 0, j = I, ele = matrix[i][j];
            bool check = true;
            while (i < m && j < n)
            {
                if (matrix[i][j] != ele)
                {
                    check = false;
                    break;
                }
                i++, j++;
            }
            if (!check)
                return check;
        }
        for (int I = 0; I < m; I++)
        {
            //对角线起点在第一列
            int i = I, j = 0, ele = matrix[i][j];
            bool check = true;
            while (i < m && j < n)
            {
                if (matrix[i][j] != ele)
                {
                    check = false;
                    break;
                }
                i++, j++;
            }
            if (!check)
                return check;
        }
        return true;
    }
};
// @lc code=end
