/*
 * Problem: Running Sum of 1d Array
 * Problem ID: 1603
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 12.7 MB
 * Synced From: LeetCode
 * Date: 2026-07-05
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++){
            nums[i] = nums[i] + nums[i-1];
        }
        return nums;
    }
};