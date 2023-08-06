/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* prev=head;
        ListNode* curr=head->next;
        while(curr!=NULL){
            if(prev->val==curr->val){
                ListNode* forward=curr;
                curr=curr->next;
                prev->next=curr;
                delete forward;
            }
            else{
                prev=prev->next;
                curr=curr->next;
            }
        }
        return head;
    }
};
// @lc code=end

