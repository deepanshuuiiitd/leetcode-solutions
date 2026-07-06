/*
 * Problem: Rotate String
 * Problem ID: 812
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 8 MB
 * Synced From: LeetCode
 * Date: 2026-07-06
 */

class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length()){
            return false;
        }

        string str = s + s;

        if (str.contains(goal)){
            return true;
        }else{
            return false;
        }

    }
};