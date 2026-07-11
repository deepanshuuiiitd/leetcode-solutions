/*
 * Problem: Reverse Linked List
 * Problem ID: 206
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 13.2 MB
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
    ListNode* reverseList(ListNode* head) {

    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {

        ListNode* next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;
    }

    return prev;
}
};