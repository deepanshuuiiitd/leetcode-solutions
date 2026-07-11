/*
 * Problem: Remove Nth Node From End of List
 * Problem ID: 19
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 15 MB
 * Synced From: LeetCode
 * Date: 2026-07-11
 */

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // fast and slow pointer approach

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both pointers
        while (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete node
        ListNode* del = slow->next;
        slow->next = del->next;
        delete del;

        return dummy->next;

        // ListNode* dummy = new ListNode(0); 
        // dummy-> next = head;
        // int count = 0;
        // ListNode* temp = head;
        // while(temp){
        //     count++;
        //     temp = temp -> next;
        // }
        // ListNode* curr = head;
        // ListNode* prev = dummy;
        // int idx = 0;
        // while(curr){
        //     if (idx == count - n){
        //         prev -> next = curr-> next;
        //         delete curr;
        //         break;
        //     }
        //     prev= curr;
        //     curr = curr-> next;
        //     idx++;
            
        // }
        // return dummy -> next;

    }
};