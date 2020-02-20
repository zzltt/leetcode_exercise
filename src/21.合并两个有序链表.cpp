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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(-1); //哑节点简化代码
        ListNode *workNode = result;//不停next，会指向最后的节点，所以result用来保留初始位置
        
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val <= l2->val)
            {
                workNode->next = l1;
                l1 = l1->next;
            }
            else
            {
                workNode->next = l2;
                l2 = l2->next;
            }
            workNode = workNode->next;
        }
        workNode->next = l1 != nullptr ? l1 : l2;

        return result->next;
    }
};
// @lc code=end

