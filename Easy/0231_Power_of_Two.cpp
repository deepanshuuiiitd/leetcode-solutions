/*
 * Problem: Power of Two
 * Problem ID: 231
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 7.9 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        while (n % 2 == 0) {
            n /= 2;
        }

        return n == 1;
    }
};