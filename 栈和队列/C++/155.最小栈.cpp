// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>
#include "commoncppproblem155.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack
{
public:
    /** initialize your data structure here. */
    stack<int> min_stack;
    stack<int> st;
    MinStack()
    {
        min_stack.push(INT_MAX);
    }

    void push(int x)
    {
        st.push(x);
        min_stack.push(min(x,min_stack.top()));
    }

    void pop()
    {
        st.pop();
        min_stack.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
