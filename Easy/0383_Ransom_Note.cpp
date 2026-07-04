/*
 * Problem: Ransom Note
 * Problem ID: 383
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.6 MB
 * Synced From: LeetCode
 * Date: 2026-07-04
 */

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        for (char ch: magazine){
            freq[ch - 'a']++;
        }
        for (char ch: ransomNote){
            freq[ch - 'a']--;
        }
        for (int i = 0; i < 26; i++){
            if (freq[i] < 0 ){
                return false;
            }
        }
        return true;
    }
};