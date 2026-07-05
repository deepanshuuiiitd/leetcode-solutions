/*
 * Problem: Reverse Vowels of a String
 * Problem ID: 345
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 10.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-05
 */

class Solution {
private:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (!isVowel(s[left])) {
                left++;
            }
            else if (!isVowel(s[right])) {
                right--;
            }
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }
};