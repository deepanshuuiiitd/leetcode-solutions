/*
 * Problem: First Unique Character in a String
 * Problem ID: 387
 * Difficulty: Easy
 * Language: C++
 * Runtime: 4 ms
 * Memory: 14.6 MB
 * Synced From: LeetCode
 * Date: 2026-07-06
 */

class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};