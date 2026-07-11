/*
 * Problem: Middle of the Linked List
 * Problem ID: 908
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 10.1 MB
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
    ListNode* middleNode(ListNode* head) {

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

    }

    return slow;
}
};