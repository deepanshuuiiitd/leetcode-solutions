/*
 * Problem: Find the Smallest Divisor Given a Threshold
 * Problem ID: 1408
 * Difficulty: Medium
 * Language: C++
 * Runtime: 11 ms
 * Memory: 26.1 MB
 * Synced From: LeetCode
 * Date: 2026-07-02
 */

class Solution {
public:
    int is_possible(vector<int>& nums, int div){

        int digit = 0;
        int digitsum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            digit = ceil((double)nums[i]/(double)div);
            digitsum += digit;
        }
        return digitsum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans = 0;

        while(low <= high){
        int mid = low + (high - low)/2;
            if (is_possible(nums,mid) <= threshold){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid +1;
            }
        }
        return ans;
    }
};