/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cal = 0;
        for (auto x : nums)
        {
            if (x != 0)
            {
                nums[cal++] = x;
            }
        }
        for (auto it = cal; it != nums.size(); it++)
            nums[it] = 0;
    }
};
// @lc code=end

