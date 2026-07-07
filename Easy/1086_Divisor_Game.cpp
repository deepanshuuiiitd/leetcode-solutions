/*
 * Problem: Divisor Game
 * Problem ID: 1086
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 7.6 MB
 * Synced From: LeetCode
 * Date: 2026-07-07
 */

class Solution {
public:
    bool divisorGame(int n) {
        if (n % 2 == 0){
            return true;
        }else{
            return false;
        }
    }
};