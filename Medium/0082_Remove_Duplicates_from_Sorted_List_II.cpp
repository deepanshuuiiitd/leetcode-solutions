/*
 * Problem: Remove Duplicates from Sorted List II
 * Problem ID: 82
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 15.9 MB
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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            if (curr->next && curr->val == curr->next->val) {

                int dup = curr->val;

                while (curr && curr->val == dup) {
                    ListNode* temp = curr;
                    curr = curr->next;
                    delete temp;
                }

                prev->next = curr;
            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};