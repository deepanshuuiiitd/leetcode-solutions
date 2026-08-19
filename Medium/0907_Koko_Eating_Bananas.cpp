/*
 * Problem: Koko Eating Bananas
 * Problem ID: 907
 * Difficulty: Medium
 * Language: C++
 * Runtime: 15 ms
 * Memory: 22.9 MB
 * Synced From: LeetCode
 * Date: 2026-08-19
 */

class Solution {
public:

    bool canEat(vector<int>& piles,
                int h,
                int k)
    {
        long long hours = 0;

        for (int pile : piles) {
            hours += ceil((double)pile / k);
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles,
                       int h)
    {
        int low = 1;

        int high =
            *max_element(piles.begin(),
                         piles.end());

        int ans = high;

        while (low <= high)
        {
            int mid =
                low + (high - low) / 2;

            if (canEat(piles, h, mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};