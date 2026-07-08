/*
 * Problem: Maximum Number of Vowels in a Substring of Given Length
 * Problem ID: 1567
 * Difficulty: Medium
 * Language: C++
 * Runtime: 10 ms
 * Memory: 13.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-08
 */

class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int left = 0;
        int count = 0;
        int maxc = 0;

        for (int right = 0; right < n; right++) {
            if (isVowel(s[right])) {
                count++;
            }
            if (right - left + 1 == k) {
                maxc = max(maxc, count);

                if (isVowel(s[left])) {
                    count--;
                }
                left++;
            }
        }

        return maxc;
    }
};