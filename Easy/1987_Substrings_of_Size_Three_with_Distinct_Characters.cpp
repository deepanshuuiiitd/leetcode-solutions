/*
 * Problem: Substrings of Size Three with Distinct Characters
 * Problem ID: 1987
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.6 MB
 * Synced From: LeetCode
 * Date: 2026-07-08
 */

class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        if (n < 3) return 0;

        vector<int> freq(256, 0);
        int left = 0;
        int count = 0;
        int duplicates = 0;

        for (int right = 0; right < n; right++) {
            freq[s[right]]++;
            if (freq[s[right]] == 2) { 
                duplicates++;
            }

            if (right - left + 1 == 3) {
                if (duplicates == 0) {
                    count++;
                }

                if (freq[s[left]] == 2) {
                    duplicates--;
                }
                freq[s[left]]--;
                left++;
            }
        }

        return count;
    }
};