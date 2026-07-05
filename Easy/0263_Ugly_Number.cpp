/*
 * Problem: Ugly Number
 * Problem ID: 263
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8 MB
 * Synced From: LeetCode
 * Date: 2026-07-05
 */

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        while (n % 3 == 0){
            n /= 3;
        }
        while (n % 2 == 0){
            n /= 2;
        }
        while (n % 5 == 0){
            n /= 5;
        }
        return n == 1;
    }
};