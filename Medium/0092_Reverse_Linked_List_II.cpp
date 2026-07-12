/*
 * Problem: Reverse Linked List II
 * Problem ID: 92
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.3 MB
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (!head || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        // Move prev to node before left
        for (int i = 1; i < left; i++)
            prev = prev->next;

        ListNode* curr = prev->next;
        ListNode* next = nullptr;

        // Save first node of sublist
        ListNode* leftNode = curr;

        ListNode* revPrev = nullptr;

        int k = right - left + 1;

        while (k--) {

            next = curr->next;

            curr->next = revPrev;

            revPrev = curr;

            curr = next;
        }

        // Connect first half
        prev->next = revPrev;

        // Connect second half
        leftNode->next = curr;

        return dummy->next;
    }
};