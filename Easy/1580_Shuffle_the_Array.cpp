/*
 * Problem: Shuffle the Array
 * Problem ID: 1580
 * Difficulty: Easy
 * Language: C++
 * Runtime: 8 ms
 * Memory: 13.4 MB
 * Synced From: LeetCode
 * Date: 2026-07-06
 */

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2*n);
        for (int i =0; i<n; i++){
                result[(2*i)] = nums[i];
                result[(2*i+1)] = nums[i + n];
        }
        return result;
    }
};