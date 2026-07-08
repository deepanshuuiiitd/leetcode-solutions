/*
 * Problem: Longest Substring Without Repeating Characters
 * Problem ID: 3
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.8 MB
 * Synced From: LeetCode
 * Date: 2026-07-08
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> freq(256, 0);

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++)
        {
            freq[s[right]]++;

            while (freq[s[right]] > 1)
            {
                freq[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};