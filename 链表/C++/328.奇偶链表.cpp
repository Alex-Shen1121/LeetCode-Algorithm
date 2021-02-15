// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem328.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=328 lang=cpp
 *
 * [328] 奇偶链表
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
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head)
            return NULL;
        ListNode *odd = head->next, *even = head;
        ListNode *odd_head = odd, *even_head = even;
        while (odd && even)
        {
            if (!even->next || !odd->next)
                break;
            even->next = even->next->next;
            odd->next = odd->next->next;
            even = even->next;
            odd = odd->next;
        }
        even->next = odd_head;
        return even_head;
    }
};
// @lc code=end
