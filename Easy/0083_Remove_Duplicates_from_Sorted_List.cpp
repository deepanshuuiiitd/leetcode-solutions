/*
 * Problem: Remove Duplicates from Sorted List
 * Problem ID: 83
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 16.3 MB
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

        ListNode* curr = head;

        while (curr && curr->next) {

            if (curr->val == curr->next->val) {

                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete temp;

            } else {

                curr = curr->next;
            }
        }

        return head;
    }
};