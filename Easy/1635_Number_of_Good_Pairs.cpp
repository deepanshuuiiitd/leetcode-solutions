/*
 * Problem: Number of Good Pairs
 * Problem ID: 1635
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 9.8 MB
 * Synced From: LeetCode
 * Date: 2026-07-06
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result =0;
        for (int i =0; i< nums.size(); i++){
            for (int j= i + 1; j < nums.size(); j++){
                if (nums[i] == nums[j]){
                    result++;
                }
            }
        }
        return result;
    }
};