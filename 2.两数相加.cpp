/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *prenode = new ListNode(0);
        ListNode *lastnode = prenode;
        int val = 0;
        while(val || l1 || l2) {
            val = val + (l1?l1->val:0) + (l2?l2->val:0);
            lastnode->next = new ListNode(val % 10);
            lastnode = lastnode->next;
            val = val / 10;
            l1 = l1?l1->next:nullptr;
            l2 = l2?l2->next:nullptr;
        }
        ListNode *res = prenode->next;
        delete prenode; // 释放额外引入的prenode
        return res;
    }
};
// @lc code=end

