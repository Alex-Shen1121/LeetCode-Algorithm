// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem24.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *ans = new ListNode(-1);
        ans->next=head;
        ListNode *pre = ans;
        while (pre->next && pre->next->next)
        {
            ListNode *first=pre->next,*second=pre->next->next;
            first->next = second->next;
            second->next = first;
            pre->next = second;
            pre = first;
        }
        return ans->next;
    }
};
// @lc code=end
