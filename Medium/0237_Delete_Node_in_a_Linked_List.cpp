/*
 * Problem: Delete Node in a Linked List
 * Problem ID: 237
 * Difficulty: Medium
 * Language: C++
 * Runtime: 6 ms
 * Memory: 12.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-11
 */

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
    void deleteNode(ListNode* node) {
        ListNode* temp = node-> next;
        node-> val = temp->val;
        node-> next = temp-> next;
        delete temp;
    }
};