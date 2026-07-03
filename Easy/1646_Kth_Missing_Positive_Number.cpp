/*
 * Problem: Kth Missing Positive Number
 * Problem ID: 1646
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 13.4 MB
 * Synced From: LeetCode
 * Date: 2026-07-03
 */

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0; int high = n-1;
        while (low <= high){
            int mid = low +(high -low)/2;

            int missing = arr[mid] - (mid+1);
            if (missing < k){
                low = mid +1;
            }
            else {
                high = mid -1;
            }
        }
        return k + high +1;
    }
};