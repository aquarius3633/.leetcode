/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = new ListNode();
        ListNode* head = node;
        int sum;
        int carry = 0;
        while(l1 != nullptr && l2 != nullptr) {
            sum = l1->val + l2->val + carry;
            carry = sum / 10;
            node->next = new ListNode(sum%10);
            l1 = l1->next;
            l2 = l2->next;
            node = node->next;
        }

        while(l1 != nullptr){
            sum = l1->val +carry;
            carry = sum / 10;
            node->next = new ListNode(sum%10);
            l1 = l1->next;
            node = node->next;
        }
        while(l2 != nullptr){
            sum = l2->val +carry;
            carry = sum / 10;
            node->next = new ListNode(sum%10);
            l2 = l2->next;
            node = node->next;
        }
        if(carry){
            node->next = new ListNode(carry);
        }

        return head->next;
    }
};
// @lc code=end

