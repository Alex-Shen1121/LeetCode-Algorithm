// @before-stub-for-debug-begin
#include <vector>
#include <stack>
#include <string>
#include "commoncppproblem232.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
public:
    stack<int> temp,s;

    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while (!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }
        int ans=temp.top();
        temp.pop();
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        return ans;
    }
    
    /** Get the front element. */
    int peek() {
        while (!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }
        int ans = temp.top();
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        return ans;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

