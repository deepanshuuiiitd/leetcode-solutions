/*
 * Problem: Length of Last Word
 * Problem ID: 58
 * Difficulty: Easy
 * Language: C++
 * Runtime: 2 ms
 * Memory: 8.9 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};