/*
 * Problem: Intersection of Two Linked Lists
 * Problem ID: 160
 * Difficulty: Easy
 * Language: C++
 * Runtime: 56 ms
 * Memory: 23.8 MB
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* slow = headA ;
        ListNode* fast = headB;
        int count1 = 0;
        int count2 = 0;

        while (slow){
            count1++;
            slow = slow ->next;
        }
        while (fast){
            count2++;
            fast = fast ->next;
        }
        slow = headA;
        fast = headB;
        int count3;
            if (count2 > count1){
                count3 = count2 -count1;
                while (count3){
                    fast = fast-> next;
                    count3--;
                }
            }
            if (count2 < count1){
                count3 = count1 -count2;
                while (count3){
                    slow = slow-> next;
                    count3--;
                }
            }
        while (slow && fast){
            
            if (slow == fast){
                return slow;
                break;
            }
            slow = slow-> next;
            fast = fast-> next;
        }
        return NULL;

    }
};