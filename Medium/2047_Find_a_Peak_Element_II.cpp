/*
 * Problem: Find a Peak Element II
 * Problem ID: 2047
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 50.2 MB
 * Synced From: LeetCode
 * Date: 2026-07-04
 */

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int maxrow = 0;
            for (int i = 0; i < m; i++) {
                if (mat[i][mid] > mat[maxrow][mid]) {
                    maxrow = i;
                }
            }

            int leftNeighbor = (mid - 1 >= 0) ? mat[maxrow][mid - 1] : -1;
            int rightNeighbor = (mid + 1 < n) ? mat[maxrow][mid + 1] : -1;

            if (mat[maxrow][mid] > leftNeighbor && mat[maxrow][mid] > rightNeighbor) {
                return {maxrow, mid}; 
            }
            else if (leftNeighbor > mat[maxrow][mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        
        return {-1, -1};
    }
};