/*
 * Problem: Valid Palindrome II
 * Problem ID: 680
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 22.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-05
 */

class Solution {
private:
    bool isPurePalindrome(string& s, int left, int right) {
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
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return isPurePalindrome(s, left + 1, right) || isPurePalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};