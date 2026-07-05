/*
 * Problem: Find First Palindromic String in the Array
 * Problem ID: 2231
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 23.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-05
 */

class Solution {
private:
    bool isPalindrome(const string& s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

public:
    string firstPalindrome(vector<string>& words) {
        for (const string& word : words) {
            if (isPalindrome(word)) {
                return word;
            }
        }
        return "";
    }
};