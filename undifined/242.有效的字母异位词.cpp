// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <map>
#include "commoncppproblem242.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        map<char, int> mp;
        for (char ch : s)
            mp[ch]++;
        for (char ch : t)
        {
            mp[ch]--;
            if (mp[ch] < 0)
                return false;
        }
        return true;
    }
};
// @lc code=end
