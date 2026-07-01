/*
 * Problem: Capacity To Ship Packages Within D Days
 * Problem ID: 1056
 * Difficulty: Medium
 * Language: C++
 * Runtime: 9 ms
 * Memory: 35 MB
 * Synced From: LeetCode
 * Date: 2026-07-01
 */

class Solution {
public:

    bool canShip(vector<int>& weights,
                 int days,
                 int cap)
    {
        int requiredDays = 1;
        int load = 0;

        for (int w : weights)
        {
            if (load + w <= cap)
            {
                load += w;
            }
            else
            {
                requiredDays++;
                load = w;
            }
        }

        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights,
                       int days)
    {
        int low =
            *max_element(weights.begin(),
                         weights.end());

        int high =
            accumulate(weights.begin(),
                       weights.end(),
                       0);

        int ans = high;

        while (low <= high)
        {
            int mid =
                low + (high - low) / 2;

            if (canShip(weights,
                        days,
                        mid))
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