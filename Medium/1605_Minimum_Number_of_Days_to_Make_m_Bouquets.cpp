/*
 * Problem: Minimum Number of Days to Make m Bouquets
 * Problem ID: 1605
 * Difficulty: Medium
 * Language: C++
 * Runtime: 26 ms
 * Memory: 70.5 MB
 * Synced From: LeetCode
 * Date: 2026-07-02
 */

class Solution {
private:
    bool canMakeBouquets(vector<int>& bloomDay, int midDays, int m, int k) {
        int consecutiveFlowers = 0;
        int bouquetsCreated = 0;
        
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= midDays) {
                consecutiveFlowers++;
                if (consecutiveFlowers == k) {
                    bouquetsCreated++;
                    consecutiveFlowers = 0;
                }
            } else {
                consecutiveFlowers = 0;
            }
        }
        return bouquetsCreated >= m;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowersNeeded = (long long)m * k;
        if (totalFlowersNeeded > bloomDay.size()) {
            return -1;
        }

        int low = 1;
        int high = 0;
        for (int day : bloomDay) {
            high = max(high, day);
        }

        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canMakeBouquets(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};