/*
 * Problem: Maximum Number of Words Found in Sentences
 * Problem ID: 2219
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 13 MB
 * Synced From: LeetCode
 * Date: 2026-07-08
 */

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_count = 0;
        
        for (const string& sentence : sentences) {
            int spaces = 0;
            
            for (char ch : sentence) {
                if (ch == ' ') {
                    spaces++;
                }
            }
            
            int words = spaces + 1;
            
            max_count = max(max_count, words);
        }
        
        return max_count;
    }
};