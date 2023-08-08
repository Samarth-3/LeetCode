/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
//approch1..better
class Solution {
private:
    ListNode* reverse(ListNode* slow){
        ListNode* prev=NULL;
        ListNode* curr=slow;
        while(curr!=NULL){
            ListNode* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    bool checkPal(ListNode* head,ListNode* slow){
        ListNode* temp=head;
        while(slow != nullptr && temp != nullptr){
            if(temp->val!=slow->val){
                return false;
            }
            slow=slow->next;
            temp=temp->next;
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return true; // Empty list or single node is a palindrome
        }
        if(head->next->next==NULL){
            if(head->val==head->next->val){
                return true;
            }
            return 0;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
        }
        ListNode* rev=reverse(slow);
        return checkPal(head,rev);
    }
};
//approch 2 usiing array
// class Solution {
// private:
//     bool checkpal(vector<int> arr){
//         int s=0;
//         int e=arr.size()-1;
//         while(s>=e){
//             if(arr[s]!=arr[e]){
//                 return false;
//             }
//             s++;
//             e--;
//         }
//         return true;
//     }
// public:
//     bool isPalindrome(ListNode* head) {
//         vector<int> arr;
//         int i=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }
//        return checkpal(arr);
//     }
// };
// @lc code=end

