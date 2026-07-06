/*
 * Problem: Find the Highest Altitude
 * Problem ID: 1833
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 10.9 MB
 * Synced From: LeetCode
 * Date: 2026-07-06
 */

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxsum=0;
        int sum =0;
        for (int i = 0; i< gain.size(); i++){
            sum = sum + gain[i];
            if(maxsum <sum){
                maxsum = sum;
            }
        }
        return maxsum;
    }
};