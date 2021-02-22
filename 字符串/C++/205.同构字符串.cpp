// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>
#include "commoncppproblem205.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> mp1, mp2;
        int length = s.length();
        for (int i = 0; i < length; i++)
        {
            if (mp1.find(s[i]) == mp1.end() && mp2.find(t[i]) == mp1.end())
            {
                mp1.insert(pair<char, char>(s[i], t[i]));
                mp2.insert(pair<char, char>(t[i], s[i]));
            }
            else
            {
                if (mp1[s[i]] == t[i] && mp2[t[i]] == s[i])
                    continue;
                else
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end
