// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem725.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=725 lang=cpp
 *
 * [725] 分隔链表
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
    vector<ListNode *> splitListToParts(ListNode *root, int k)
    {
        ListNode *temp = root;
        vector<ListNode *> ans;
        int num = 0;
        while (temp)
        {
            num++;
            temp = temp->next;
        }
        int quotient = num / k, remainder = num - quotient * k;
        while (k--)
        {
            if (root)
            {
                ans.push_back(root);
                int cnt = remainder > 0 ? quotient + 1: quotient;
                remainder--;
                while (cnt--){
                    if(cnt==0){
                        ListNode *temp = root;
                        root = root->next;
                        temp->next = NULL;
                    }
                    else
                        root = root->next;
                }
            }
            else
                ans.push_back(NULL);
        }
        return ans;
    }
};
// @lc code=end
