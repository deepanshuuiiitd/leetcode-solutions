/*
 * Problem: Partition List
 * Problem ID: 86
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 14.9 MB
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
    ListNode* partition(ListNode* head, int x) {

        ListNode* smallDummy = new ListNode(0);
        ListNode* largeDummy = new ListNode(0);

        ListNode* small = smallDummy;
        ListNode* large = largeDummy;

        while (head) {

            if (head->val < x) {
                small->next = head;
                small = small->next;
            }
            else {
                large->next = head;
                large = large->next;
            }

            head = head->next;
        }

        large->next = nullptr;          // Important
        small->next = largeDummy->next;

        return smallDummy->next;
    }
};