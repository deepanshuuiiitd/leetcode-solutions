/*
 * Problem: Reverse String
 * Problem ID: 344
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 27.3 MB
 * Synced From: LeetCode
 * Date: 2026-07-04
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = (int)s.size() - 1;

        while (left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};