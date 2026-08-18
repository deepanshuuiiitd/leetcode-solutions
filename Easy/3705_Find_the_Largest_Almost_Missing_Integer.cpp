/*
 * Problem: Find the Largest Almost Missing Integer
 * Problem ID: 3705
 * Difficulty: Easy
 * Language: C++
 * Runtime: 2 ms
 * Memory: 29.3 MB
 * Synced From: LeetCode
 * Date: 2026-08-18
 */

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        //1 unorderd
        unordered_map<int,int> mp;

        //2 map -- map<int,int> mp;

        for (int i = 0; i< n; i++){
            //ele le raha HOON
            int ele = nums[i];
            mp[ele]++;
        }
        if (k == 1){

            int maxi = -1;

            for (int i = 0;i<n;i++){
                int ele = nums[i];
                if(mp[ele]==1){
                    maxi = max(maxi,ele);
                }

            }
            return maxi;
            
        }

        else if(k==n){
            int maxi = nums[0];

            for (int i = 0; i< n; i++){

                maxi = max(maxi, nums[i]);
            }

            return maxi;
        }
        else{

            if (mp[nums[0]] == 1 && mp[nums[n-1]]==1){
                return max(nums[0], nums[n-1]);
            }
            else if (mp[nums[0]] == 1){
                return nums[0];
            }
            else if(mp[nums[n-1]] == 1){
                return nums[n-1];
            }
            else{
                return -1;
            }



        }
        return -1;
        


    }
};