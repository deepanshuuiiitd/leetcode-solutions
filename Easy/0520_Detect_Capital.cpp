/*
 * Problem: Detect Capital
 * Problem ID: 520
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8.1 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for (char ch : word){
            
            if (isupper(ch)){
                count++;
            }
        }
        
            if (count == 0 || count == (word.length())){
                return true;
            }
            if (count == 1 && isupper(word[0])){
                return true;
            }else {return false;}

    }
};