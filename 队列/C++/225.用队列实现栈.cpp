// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <queue>
#include "commoncppproblem225.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack
{
public:
    queue<int> q, temp;

public:
    /** Initialize your data structure here. */
    MyStack()
    {
    }

    /** Push element x onto stack. */
    void push(int x)
    {
        q.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
        while (!temp.empty())
        {
            temp.pop();
        }
        while (q.size()!=1)
        {
            temp.push(q.front());
            q.pop();
        }
        int ans = q.front();
        temp.pop();
        while (!temp.empty())
        {
            q.push(temp.front());
            temp.pop();
        }
        return ans;
    }

    /** Get the top element. */
    int top()
    {
        while (!temp.empty())
        {
            temp.pop();
        }
        while (!q.empty())
        {
            temp.push(q.front());
            q.pop();
        }
        int ans = temp.back();
        while (!temp.empty())
        {
            q.push(temp.front());
            temp.pop();
        }
        return ans;
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

