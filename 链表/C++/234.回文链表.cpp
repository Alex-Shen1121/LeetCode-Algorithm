// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include "commoncppproblem234.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        int cnt = 0;
        ListNode *current = head;
        while (head)
        {
            cnt++;
            head = head->next;
        }
        stack<int> s;
        bool ans = true;
        for (int i = 1; i <= cnt; i++)
        {
            if (i <= cnt / 2)
                s.push(current->val);
            if (i == cnt / 2 + 1 && cnt % 2 == 1){
                current = current->next;
                continue;
            }
            if (i > cnt / 2)
            {
                if (s.top() != current->val)
                {
                    ans = false;
                    break;
                }
                s.pop();
            }
            current=current->next;
        }
        return ans;
    }
};
// @lc code=end
