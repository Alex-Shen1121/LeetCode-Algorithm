// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>
#include "commoncppproblem20.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        st.push('#');
        for (char ch : s)
        {
            if (ch == '(' || ch == '[' || ch == '{')
                st.push(ch);
            else
            {
                if (ch == ')' && st.top() == '(')
                    st.pop();
                else if (ch == ']' && st.top() == '[')
                    st.pop();
                else if (ch == '}' && st.top() == '{')
                    st.pop();
                else
                    return false;
            }
        }
        return st.top() == '#' ? true : false;
    }
};
// @lc code=end
