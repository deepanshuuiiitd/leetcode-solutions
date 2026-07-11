/*
 * Problem: Linked List Cycle II
 * Problem ID: 142
 * Difficulty: Medium
 * Language: C++
 * Runtime: 5 ms
 * Memory: 11.4 MB
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
    ListNode *detectCycle(ListNode *head) {

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {

            slow = head;

            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            return slow;
        }
    }

    return NULL;
}
};