// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem206.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *next = head->next;
        ListNode *newHead = reverseList(next);
        next->next = head;
        head->next = NULL;
        return newHead;
    }
};
// @lc code=end
