// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>
#include "commoncppproblem445.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=445 lang=cpp
 *
 * [445] 两数相加 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        stack<int> s1, s2;
        while (l1)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while (l2)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }
        ListNode *ans = NULL;
        int carry = 0;
        while (!s1.empty() || !s2.empty() || carry != 0)
        {
            int a = s1.empty() ? 0 : s1.top();
            if (!s1.empty())
                s1.pop();
            int b = s2.empty() ? 0 : s2.top();
            if (!s2.empty())
                s2.pop();
            int cur = a + b + carry;
            carry = cur / 10;
            cur = cur % 10;
            ListNode *head = new ListNode(cur);
            head->next = ans;
            ans = head;
        }
        return ans;
    }
};
// @lc code=end
