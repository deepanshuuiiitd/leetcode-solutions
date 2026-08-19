/*
 * Problem: Koko Eating Bananas
 * Problem ID: 907
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 22.9 MB
 * Synced From: LeetCode
 * Date: 2026-08-19
 */

class Solution {
public:
    bool is_possible(int k,int h,vector<int>& piles){
        long long hours = 0;
        for (int i: piles){
            if(i % k == 0){
                hours += i/k;
            }
            else{
                hours += i/k +1;
            }
        }

        return hours<=h;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int high = *max_element(piles.begin(),piles.end());
       int n = piles.size();
       int ans = 0;

       int low = 1;
       
       
       while(low<high){
            int mid = (low+high)/2;

            if(is_possible(mid,h,piles)){
                high = mid;
            }
            else{
                low = mid+1;
            }
       }
       return high;
    }
};