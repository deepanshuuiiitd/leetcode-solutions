/*
 * Problem: Remove Element
 * Problem ID: 27
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.8 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int write = 0;
        
        for (int read = 0; read < nums.size(); read++) {
            if (nums[read] != val) {
                nums[write] = nums[read];
                write++;
            }
        }
        
        return write; 
    }
};