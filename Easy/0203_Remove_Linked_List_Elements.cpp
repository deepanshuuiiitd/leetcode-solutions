/*
 * Problem: Remove Linked List Elements
 * Problem ID: 203
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 20.3 MB
 * Synced From: LeetCode
 * Date: 2026-07-10
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy-> next = head;
        ListNode* curr = head;
        ListNode* prev = dummy;
        while (curr){
            if (curr ->val == val){
                prev -> next = curr -> next;
                delete curr;
                curr = prev-> next;
            }else{
                prev = curr;
                curr = curr -> next;
            }
        }
        return dummy ->next;
    }
};