// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem83.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *p = head;
        while (p&&p->next)
        {
            ListNode *next=p->next;
            if(next->val==p->val){
                p->next=p->next->next;
                delete next;
                continue;
            }
            p=p->next;
        }
        return head;
    }
};
// @lc code=end
