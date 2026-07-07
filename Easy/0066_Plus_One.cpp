/*
 * Problem: Plus One
 * Problem ID: 66
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};