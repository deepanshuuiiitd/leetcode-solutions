/*
 * Problem: Pow(x, n)
 * Problem ID: 50
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.8 MB
 * Synced From: LeetCode
 * Date: 2026-07-23
 */

class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;

        // Handle negative power
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        double ans = 1.0;

        while (power > 0) {
            // If power is odd
            if (power % 2 == 1) {
                ans *= x;
            }

            x *= x;
            power /= 2;
        }

        return ans;
    }
};