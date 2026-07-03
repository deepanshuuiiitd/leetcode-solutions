/*
 * Problem: Search a 2D Matrix
 * Problem ID: 74
 * Difficulty: Medium
 * Language: C++
 * Runtime: 0 ms
 * Memory: 13.4 MB
 * Synced From: LeetCode
 * Date: 2026-07-03
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix,
                      int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = m * n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            int row = mid / n;
            int col = mid % n;

            int val = matrix[row][col];

            if (val == target)
                return true;

            else if (val < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return false;
    }
};