/*
 * Problem: Concatenate Non-Zero Digits and Multiply by Sum I
 * Problem ID: 4135
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 9.4 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    long long sumAndMultiply(long long n) {
        string nStr = to_string(n);
        string xStr = "";

        for (char ch : nStr) {
            if (ch != '0') {
                xStr += ch;
            }
        }

        if (xStr.empty()) {
            return 0;
        }

        long long x = stoll(xStr);
        long long digitSum = 0;

        for (char ch : xStr) {
            digitSum += (ch - '0');
        }
        return x * digitSum;
    }
};