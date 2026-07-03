/*
 * Problem: Split Array Largest Sum
 * Problem ID: 410
 * Difficulty: Hard
 * Language: C++
 * Runtime: 3 ms
 * Memory: 10.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-03
 */

class Solution {
public:

    bool is_possible(vector<int>& nums, int k, int t){
            int subarray = 1;
            int sum = 0;

        for (int i = 0; i <nums.size(); i++){
            if (sum + nums[i]<= t){
                sum += nums[i];
            }
            else {
                subarray++;
                sum = nums[i];
            }
        }
        return subarray <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = high;

        while (low <= high){
            int mid = low + (high - low)/2;
            if (is_possible(nums, k , mid)){
                ans = mid;
                high = mid -1;
            }
            else {
                low = mid+1;
            }

        }
        return ans;
        }
};