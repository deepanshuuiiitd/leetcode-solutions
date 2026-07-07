/*
 * Problem: Build Array from Permutation
 * Problem ID: 2048
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 20.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result(nums.size());
        for(int i =0; i < nums.size(); i++){
            result[i] = nums[nums[i]];
        }
        return result;
        
    }
};