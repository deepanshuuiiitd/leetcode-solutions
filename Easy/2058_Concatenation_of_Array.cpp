/*
 * Problem: Concatenation of Array
 * Problem ID: 2058
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 16.6 MB
 * Synced From: LeetCode
 * Date: 2026-07-06
 */

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(2*nums.size());

        for (int i = 0; i<nums.size(); i++){
            result[i] = nums[i];
            result[i+nums.size()] = nums[i];
        }
        return result;
        
    }
};