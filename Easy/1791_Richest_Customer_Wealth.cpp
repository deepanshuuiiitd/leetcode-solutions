/*
 * Problem: Richest Customer Wealth
 * Problem ID: 1791
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.3 MB
 * Synced From: LeetCode
 * Date: 2026-07-06
 */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for (int i = 0; i < accounts.size(); i++){
            for (int j = 0; j< accounts[i].size(); j++){
                int sum = 0;
                sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
                if (sum > max){
                    max = sum;
                }
            }
        }
        return max;
    }
};