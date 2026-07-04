/*
 * Problem: Valid Anagram
 * Problem ID: 242
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 9.7 MB
 * Synced From: LeetCode
 * Date: 2026-07-04
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[26] = {0};
        int freq2[26] = {0};

        for (char ch1 : s){
            freq1[ch1 - 'a']++;
        }
        for (char ch2 : t){
            freq2[ch2 - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
};