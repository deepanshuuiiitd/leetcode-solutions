/*
 * Problem: Largest Odd Number in String
 * Problem ID: 2032
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 17.8 MB
 * Synced From: LeetCode
 * Date: 2026-07-04
 */

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.length() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};