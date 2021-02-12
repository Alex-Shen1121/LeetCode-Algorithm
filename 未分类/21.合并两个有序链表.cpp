// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem21.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *ans, *p;
        ans = new ListNode(0);
        p = ans;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                p->next = new ListNode(l1->val);
                p = p->next;
                l1=l1->next;
            }
            else
            {
                p->next = new ListNode(l2->val);
                p = p->next;
                l2=l2->next;
            }
        }
        p->next = (l1 == NULL) ? l2 : l1;
        return ans->next;
    }
};
// @lc code=end
