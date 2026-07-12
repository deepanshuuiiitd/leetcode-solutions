/*
 * Problem: Swap Nodes in Pairs
 * Problem ID: 24
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-12
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy-> next = head;

        ListNode* curr = head;
        ListNode* prev = dummy;
        while (prev->next && prev->next->next){
            ListNode* first = prev -> next;
            ListNode* second = first-> next;
            ListNode* third = second->next;
            prev-> next = second;
            second -> next = first;
            first -> next = third;

            prev = first;
        }
        return dummy -> next;
    }
};