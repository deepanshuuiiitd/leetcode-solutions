/*
 * Problem: Merge Strings Alternately
 * Problem ID: 1894
 * Difficulty: Easy
 * Language: C++
 * Runtime: 4 ms
 * Memory: 8.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        int j = 0;
        int n1 = word1.length();
        int n2 = word2.length();

        while (i < n1 || j < n2) {
            if (i < n1) {
                result += word1[i];
                i++;
            }
            if (j < n2) {
                result += word2[j];
                j++;
            }
        }

        return result;
    }
};